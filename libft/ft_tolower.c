/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:04:23 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:59:40 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts an uppercase letter to its lowercase equivalent.
** If 'c' is not an uppercase letter, it is returned unchanged.
**
** @param c: Character to convert
** @return Lowercase equivalent of 'c', or 'c' unchanged if not uppercase
*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
