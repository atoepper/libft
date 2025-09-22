/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:26:29 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:02:13 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a new string of size 'size', initialized to zero.
**
** @param size: Number of characters to allocate
** @return Pointer to the newly allocated string, or NULL if allocation fails
*/

static char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc(size + 1);
	if (!new)
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}

/*
** Allocates and returns a new string which is a duplicate 
** of the first 'n' characters of 's'.
**
** @param s: Source string
** @param n: Number of characters to duplicate
** @return Pointer to the newly allocated string, or NULL if allocation fails
*/

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = ft_strnew(n);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	return (str);
}
