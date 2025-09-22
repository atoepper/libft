/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:24:33 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:52:23 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Writes the string 's' followed by a newline character 
** to the given file descriptor 'fd'.
**
** @param s: String to write
** @param fd: File descriptor to write to
** @return None
*/

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
		write(fd, s++, 1);
	write (fd, "\n", 1);
}
