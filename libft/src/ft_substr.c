/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:47:18 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:59:13 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a new string which is a substring of 's',
** starting at index 'start' and of maximum length 'len'.
**
** @param s: Input string
** @param start: Starting index of the substring
** @param len: Maximum length of the substring
** @return Pointer to the newly allocated substring, or NULL if allocation fails
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	length;

	length = (size_t)ft_strlen((char *)s);
	if (s == NULL)
		return (NULL);
	if ((size_t)start >= length)
	{
		sub = (char *)malloc(sizeof(char));
		*sub = '\0';
		return (sub);
	}
	if (len > length)
		len = length;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
