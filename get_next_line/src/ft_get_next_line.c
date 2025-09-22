/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:19:21 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:51:26 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/get_next_line.h"

/*
** Saves the remainder of 'text_read' after the first newline character
** into a new string. Frees the original 'text_read'.
**
** @param text_read: String containing previously read text
** @return Pointer to the remainder string, or NULL if no remainder
*/
static char	*save_remainder_gnl(char *text_read)
{
	int		i;
	int		j;
	char	*remainder;

	i = 0;
	while (text_read[i] && text_read[i] != '\n')
		i++;
	if (!text_read[i])
	{
		free(text_read);
		return (NULL);
	}
	remainder = (char *)malloc(sizeof(char)
			* (ft_strlen_gnl(text_read) - i + 1));
	if (!remainder)
		return (NULL);
	i++;
	j = 0;
	while (text_read[i])
		remainder[j++] = text_read[i++];
	remainder[j] = '\0';
	free (text_read);
	return (remainder);
}

/*
** Extracts the first line (up to and including newline if present)
** from 'text_read' and returns it as a new string.
**
** @param text_read: String containing text to extract a line from
** @return Newly allocated string containing the line, or NULL if empty
*/
static char	*extract_line_gnl(char *text_read)
{
	int		linelen;
	char	*line;

	if (!text_read[0])
		return (NULL);
	linelen = ft_linelen_gnl(text_read);
	if (ft_strchr_gnl(text_read, '\n'))
		line = (char *)malloc(sizeof(char) * (linelen + 2));
	else
		line = (char *)malloc(sizeof(char) * (linelen + 1));
	if (line == NULL)
		return (NULL);
	copy_line_gnl(line, text_read);
	return (line);
}

/*
** Reads from file descriptor 'fd' and appends new content to 'text_read'
** until a newline is encountered or end of file is reached.
**
** @param fd: File descriptor to read from
** @param text_read: String containing previously read text
** @return Updated string containing all read text, or NULL on error
*/
static char	*add_new_line_gnl(int fd, char *text_read)
{
	char	*buffer;
	int		bytes_read;

	buffer = (char *)malloc((BUFFER_SIZE +1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr_gnl(text_read, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(text_read);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		text_read = ft_strjoin_gnl(text_read, buffer);
	}
	free (buffer);
	return (text_read);
}

/*
** Reads the next line from the file descriptor 'fd'.
** Supports multiple file descriptors simultaneously.
**
** @param fd: File descriptor to read from
** @return Newly allocated string containing the next line, or NULL on EOF/error
*/
char	*get_next_line(int fd)
{
	char			*line;
	static char		*text_read[1024];

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	text_read[fd] = add_new_line_gnl(fd, text_read[fd]);
	if (!text_read[fd])
		return (NULL);
	line = extract_line_gnl(text_read[fd]);
	text_read[fd] = save_remainder_gnl(text_read[fd]);
	return (line);
}
