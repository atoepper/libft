/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:19:23 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:35:09 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

/*
** Returns the number of hexadecimal digits required to
** represent the pointer 'num'.
**
** @param num: Pointer value cast to uintptr_t
** @return Number of hexadecimal digits
*/

static int	ft_ptrlen(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

/*
** Recursively prints the hexadecimal representation of the pointer value 'num'.
**
** @param num: Pointer value cast to uintptr_t
** @return None
*/

static void	ft_putadress(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putadress(num / 16);
		ft_putadress(num % 16);
	}
	else
	{
		if (num < 10)
			ft_putchar_printf (num + '0');
		else
			ft_putchar_printf (num - 10 + 'a');
	}
}

/*
** Prints the pointer 'arg' in standard hexadecimal format (starting with "0x")
** and returns the number of characters printed.
**
** @param arg: Pointer to print
** @return Number of characters printed
*/

int	ft_putptr_printf(void *arg)
{
	if (arg == NULL)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write (1, "0x", 2);
	ft_putadress((uintptr_t)arg);
	return (ft_ptrlen((uintptr_t)arg) + 2);
}
