/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:34:53 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:34:46 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

/*
** Returns the number of digits required to represent the integer 'nbr',
** including space for a negative sign if applicable.
**
** @param nbr: Integer to measure
** @return Number of digits required
*/

static int	ft_numlen(int nbr)
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
** Recursively prints the integer 'nbr' to standard output.
**
** @param nbr: Integer to print
** @return None
*/

static void	ft_putnbr(int nbr)
{
	if (nbr == INT_MIN)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar_printf('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar_printf(nbr % 10 + '0');
}

/*
** Prints the integer 'nbr' to standard output and returns
** the number of characters printed.
**
** @param nbr: Integer to print
** @return Number of characters printed
*/

int	ft_putnbr_printf(int nbr)
{
	ft_putnbr(nbr);
	return (ft_numlen(nbr));
}
