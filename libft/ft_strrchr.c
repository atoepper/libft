/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:17:29 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 12:02:40 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the last occurrence of the 
** character 'c' in the string 's'. If 'c' is '\0',
** returns a pointer to the null terminator at the end of the string.
**
** @param s: Input string
** @param c: Character to locate
** @return Pointer to the last occurrence of 'c', or NULL if not found
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occ;

	last_occ = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occ = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last_occ);
}
