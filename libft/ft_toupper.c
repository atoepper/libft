/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:00:12 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:03:09 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts a lowercase letter to its uppercase equivalent.
** If 'c' is not a lowercase letter, it is returned unchanged.
**
** @param c: Character to convert
** @return Uppercase equivalent of 'c', or 'c' unchanged if not lowercase
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
