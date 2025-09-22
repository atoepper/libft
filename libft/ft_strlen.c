/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:53:26 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:56:22 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calculates the length of the string 'str', excluding the null terminator.
**
** @param str: Input string
** @return Number of characters in the string
*/

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (str != NULL && *str)
	{
		str++;
		count++;
	}
	return (count);
}
