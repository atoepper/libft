/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:20:41 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:49:17 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Writes the character 'c' to the given file descriptor 'fd'.
**
** @param c: Character to write
** @param fd: File descriptor to write to
** @return None
*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
