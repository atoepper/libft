/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:33:50 by alexander         #+#    #+#             */
/*   Updated: 2025/09/22 12:01:35 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Applies the function 'f' to each character of the string 's' to create
** a new string resulting from successive applications of 'f'.
**
** @param s: Input string
** @param f: Function to apply to each character,
** taking the index and the character
** @return Pointer to the newly allocated string, or NULL if allocation fails
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*pt;
	char	*appl;
	size_t	i;

	i = 0;
	pt = (char *)s;
	if (pt == NULL)
		return (NULL);
	appl = (char *)malloc(sizeof(char) * (ft_strlen(pt) + 1));
	if (appl == NULL)
		return (NULL);
	while (i < ft_strlen(pt))
	{
		appl[i] = f(i, pt[i]);
		i++;
	}
	appl[i] = '\0';
	return (appl);
}
