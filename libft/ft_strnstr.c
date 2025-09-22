/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:57:56 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:58:25 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of the null-terminated string 'needle'
** in the string 'haystack', where not more than 'len' characters are searched.
**
** @param haystack: String to search in
** @param needle: Substring to search for
** @param len: Maximum number of characters to search
** @return Pointer to the first occurrence of 'needle' in 'haystack',
**         or NULL if 'needle' is not found within the first 'len' characters
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char			*stack;
	unsigned int	i;
	unsigned int	j;

	stack = (char *)haystack;
	i = 0;
	if (((needle == NULL || *needle == '\0') && len == 0)
		|| (*haystack == '\0' && *needle == '\0'))
		return (stack);
	while (stack[i] != '\0' && len > 0)
	{
		j = 0;
		while (stack[i + j] == needle[j] && needle[j] != '\0' && j < len)
			j++;
		if (needle[j] == '\0')
			return (stack + i);
		i++;
		len--;
	}
	return (NULL);
}
