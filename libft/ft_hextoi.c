/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:27:04 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:41:34 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts the first i characters of a hexadecimal string to a long integer.
** Handles both uppercase and lowercase hex digits.
**
** @param s: Input hexadecimal string
** @param i: Number of characters to convert
** @return Converted long integer value
*/

long	ft_hextoi(char *s, int i)
{
	long	n;

	n = 0;
	while (*s && i > 0)
	{
		n *= 16;
		if (*s >= 'A' && *s <= 'F')
			n += *s - 'A' + 10;
		else if (*s >= 'a' && *s <= 'f')
			n += *s - 'a' + 10;
		else
			n += *s - '0';
		++s;
		i--;
	}
	return (n);
}
