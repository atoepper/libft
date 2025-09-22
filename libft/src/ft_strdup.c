/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:05:36 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:00:26 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory and returns a duplicate of the string 's1'.
**
** @param s1: String to duplicate
** @return Pointer to the newly allocated duplicate string,
** or NULL if allocation fails
*/

char	*ft_strdup(const char *s1)
{
	char	*dupl;

	if (s1 == NULL)
		return (NULL);
	dupl = (char *)malloc(ft_strlen((char *)s1) + 1);
	if (dupl == NULL)
		return (NULL);
	ft_strlcpy(dupl, s1, ft_strlen((char *)s1) + 1);
	return (dupl);
}
