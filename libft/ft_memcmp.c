/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:37:20 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:47:10 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares the first n bytes of the memory areas s1 and s2.
**
** @param s1: Pointer to the first memory area
** @param s2: Pointer to the second memory area
** @param n: Number of bytes to compare
** @return An integer less than, equal to, or greater than zero if
**         the first differing byte in s1 is found to be less than,
**         equal to, or greater than the corresponding byte in s2
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*pt1 != *pt2)
			return (*pt1 - *pt2);
		pt1++;
		pt2++;
		n--;
	}
	return (0);
}
