/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:43:47 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:41:54 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Converts a string to a long long integer.
** Skips leading whitespace, handles optional '+' or '-' sign,
** and parses consecutive digits until a non-digit is found.
**
** @param str: Input string to convert
** @return Converted long long value
*/

long long	ft_atoi(const char *str)
{
	long long	nbr;
	long long	sign;

	sign = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f' )
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (sign * nbr);
}
