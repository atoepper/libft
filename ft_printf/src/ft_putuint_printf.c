/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:41:42 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:35:34 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

/*
** Returns the number of decimal digits required to
** represent the unsigned integer 'nbr'.
**
** @param nbr: Unsigned integer to measure
** @return Number of decimal digits
*/

static int	ft_numlen(unsigned int nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
		len++;
	while (nbr / 10 != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

/*
** Recursively prints the unsigned integer 'nbr' to standard output.
**
** @param nbr: Unsigned integer to print
** @return None
*/

static void	ft_putuint(unsigned int nbr)
{
	if (nbr >= 10)
		ft_putuint(nbr / 10);
	ft_putchar_printf(nbr % 10 + '0');
}

/*
** Prints the unsigned integer 'nbr' to standard output and returns
** the number of characters printed.
**
** @param nbr: Unsigned integer to print
** @return Number of characters printed
*/

int	ft_putuint_printf(unsigned int nbr)
{
	ft_putuint(nbr);
	return (ft_numlen(nbr));
}
