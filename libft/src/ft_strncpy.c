/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:34:42 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:01:54 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies up to 'len' characters from the string 'src' to 'dst'.
** If 'src' is shorter than 'len', the remainder of 'dst' 
** is filled with null bytes.
**
** @param dst: Destination buffer
** @param src: Source string to copy
** @param len: Maximum number of characters to copy
** @return Pointer to the destination buffer 'dst'
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
