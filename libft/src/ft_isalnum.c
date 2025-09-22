/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:42:40 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:41:30 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the given character is alphanumeric (a letter or a digit).
**
** @param c: Character to check
** @return 1 if alphanumeric, 0 otherwise
*/

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit (c) == 1)
		return (1);
	else
		return (0);
}
