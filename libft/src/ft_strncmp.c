/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:32:15 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:57:01 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares up to 'n' characters of the strings 's1' and 's2'.
**
** @param s1: First string to compare
** @param s2: Second string to compare
** @param n: Maximum number of characters to compare
** @return An integer less than, equal to, or greater than zero if
**         the first differing character in s1 is found to be less than,
**         equal to, or greater than the corresponding character in s2
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}
