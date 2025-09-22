/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:35:27 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:28:37 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

/*
** Handles a single format specifier for ft_printf by calling the
** appropriate helper function for each supported type.
**
** @param c: Format specifier character (e.g., 'c', 's', 'd', etc.)
** @param args: va_list of arguments passed to ft_printf
** @return Number of characters printed for this specifier
*/

static int	ft_putarg(const char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_printf(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr_printf(va_arg(args, char *)));
	if (c == 'p')
		return (ft_putptr_printf(va_arg(args, void *)));
	if (c == '%')
		return (ft_putchar_printf('%'));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_printf(va_arg(args, int)));
	if (c == 'u')
		return (ft_putuint_printf(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_puthexlow_printf(va_arg(args, int)));
	if (c == 'X')
		return (ft_puthexup_printf(va_arg(args, int)));
	return (0);
}

/*
** A simplified printf function that prints formatted output to stdout.
** Supports the following format specifiers: %c, %s, %p, %d, %i, %u, %x, %X, %%
**
** @param str: Format string containing plain characters and format specifiers
** @param ...: Variable number of arguments corresponding to format specifiers
** @return Total number of characters printed
*/

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str != '%')
				count += ft_putarg(*str, args);
			else
				count += ft_putchar_printf('%');
		}
		else
		{
			count++;
			write(1, str, 1);
		}
		str++;
	}
	va_end(args);
	return (count);
}
