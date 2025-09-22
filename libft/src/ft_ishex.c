/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:22:43 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:41:08 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the given character is a valid hexadecimal digit
** (0–9, A–F, or a–f).
**
** @param c: Character to check
** @return 1 if hexadecimal digit, 0 otherwise
*/

int	ft_ishex(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 70)
		|| (c >= 97 && c <= 102))
		return (1);
	else
		return (0);
}
