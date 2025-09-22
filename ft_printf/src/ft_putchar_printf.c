/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:13:30 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:28:51 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

/*
** Writes the character 'c' to standard output.
**
** @param c: Character to write
** @return Number of characters written (always 1)
*/

int	ft_putchar_printf(char c)
{
	write(1, &c, 1);
	return (1);
}
