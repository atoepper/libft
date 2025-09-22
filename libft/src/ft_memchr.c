/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:14:36 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:46:54 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Scans the first n bytes of the memory area pointed to by s
** for the first occurrence of the byte c.
**
** @param s: Pointer to the memory area to scan
** @param c: Byte to search for (converted to unsigned char)
** @param n: Number of bytes to scan
** @return Pointer to the first occurrence of c in s, or NULL if not found
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pt;
	size_t				i;

	pt = s;
	i = 0;
	while (i < n)
	{
		if (pt[i] == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
