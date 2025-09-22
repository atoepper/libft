/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:02:38 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:46:33 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/get_next_line.h"

/*
** Returns the length of the string 'str'.
**
** @param str: String to measure
** @return Number of characters before the null terminator, 0 if str is NULL
*/
size_t	ft_strlen_gnl(char *str)
{
	size_t	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c] != '\0')
		c++;
	return (c);
}

/*
** Returns the number of characters in 'str' up to (but not including)
** the first newline.
**
** @param str: String to measure
** @return Number of characters before the newline or null terminator
*/
size_t	ft_linelen_gnl(char *str)
{
	size_t	count;

	count = 0;
	while (*str && *str != '\n')
	{
		str++;
		count++;
	}
	return (count);
}

/*
** Searches for the first occurrence of character 'c' in string 's'.
**
** @param s: String to search
** @param c: Character to find
** @return Pointer to first occurrence of 'c', or NULL if not found
*/
char	*ft_strchr_gnl(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen_gnl(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/*
** Copies characters from 'text_read' into 'line' up to and including
** the first newline character (if present), and null-terminates the result.
**
** @param line: Destination string (must be pre-allocated)
** @param text_read: Source string
** @return None
*/
void	copy_line_gnl(char *line, char *text_read)
{
	int	i;

	i = 0;
	while (text_read[i] && text_read[i] != '\n')
	{
		line[i] = text_read[i];
		i++;
	}
	if (text_read[i] == '\n')
	{
		line[i] = text_read[i];
		i++;
	}
	line[i] = '\0';
}

/*
** Concatenates 's1' and 's2' into a new string,
** frees 's1', and returns the result.
** If 's1' is NULL, it is treated as an empty string.
**
** @param s1: First string (will be freed)
** @param s2: Second string
** @return Newly allocated concatenated string, or NULL on allocation failure
*/
char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = (char *)malloc(1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	join = malloc(sizeof(char) * ((ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1)));
	if (join == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			join[i] = s1[i];
	while (s2[j] != '\0')
		join[i++] = s2[j++];
	join[ft_strlen_gnl(s1) + ft_strlen_gnl(s2)] = '\0';
	free(s1);
	return (join);
}
