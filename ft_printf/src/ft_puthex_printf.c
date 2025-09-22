/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:48:47 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:31:43 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

/*
** Returns the number of hexadecimal digits required to represent 'nbr'.
**
** @param nbr: Unsigned integer to measure
** @return Number of hexadecimal digits
*/

static int	ft_hexlen(unsigned int nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
		len++;
	while (nbr / 16 != 0)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}

/*
** Recursively prints the hexadecimal representation of 'nbr'
** using the characters in string 's'.
**
** @param nbr: Unsigned integer to print
** @param s: String containing hexadecimal digits (e.g., "0123456789abcdef")
** @return None
*/

static void	ft_puthex(unsigned int nbr, char *s)
{
	if (nbr >= 16)
		ft_puthex(nbr / 16, s);
	ft_putchar_printf(s[nbr % 16]);
}

/*
** Prints the unsigned integer 'nbr' in lowercase hexadecimal format
** and returns the number of characters printed.
**
** @param nbr: Unsigned integer to print
** @return Number of characters printed
*/

int	ft_puthexlow_printf(unsigned int nbr)
{
	ft_puthex(nbr, "0123456789abcdef");
	return (ft_hexlen(nbr));
}

/*
** Prints the unsigned integer 'nbr' in uppercase hexadecimal format
** and returns the number of characters printed.
**
** @param nbr: Unsigned integer to print
** @return Number of characters printed
*/

int	ft_puthexup_printf(unsigned int nbr)
{
	ft_puthex(nbr, "0123456789ABCDEF");
	return (ft_hexlen(nbr));
}
