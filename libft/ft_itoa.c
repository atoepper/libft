/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:57:01 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:40:21 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts the number of characters needed to represent an integer
** as a string (including space for a minus sign if negative).
**
** @param n: Integer value
** @return Number of characters required
*/

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/*
** Converts an integer to its string representation and stores
** the result in the provided buffer.
**
** @param nbr: Destination buffer (must be large enough)
** @param n: Integer value to convert
** @return None
*/

void	put_digit(char *nbr, long n)
{
	int	i;
	int	sign;

	i = count_digits(n);
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	nbr[i] = '\0';
	i--;
	while (i >= 0)
	{
		nbr[i] = n % 10 + '0';
		n /= 10;
		if (i == 0 && sign == -1)
			nbr[i] = '-';
		i--;
	}
}

/*
** Allocates and returns a string representing the given integer.
**
** @param n: Integer value to convert
** @return Pointer to the newly allocated string, or NULL on failure
*/

char	*ft_itoa(int n)
{
	char	*nbr;

	nbr = (char *)malloc(sizeof(char) * (count_digits(n) + 1));
	if (nbr == NULL)
		return (NULL);
	put_digit(nbr, n);
	return (nbr);
}
