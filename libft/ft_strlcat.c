/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:30:49 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:55:43 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends the string 'src' to the end of 'dst', ensuring that
** the total length does not exceed 'dstsize' bytes (including null terminator).
**
** @param dst: Destination string buffer
** @param src: Source string to append
** @param dstsize: Total size of the destination buffer
** @return The total length of the string it tried to create
**         (initial length of dst + length of src)
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*pt;
	size_t	dest_len;
	size_t	src_len;
	size_t	result;
	size_t	i;

	pt = (char *)src;
	src_len = ft_strlen(pt);
	dest_len = ft_strlen(dst);
	result = 0;
	i = 0;
	if (dstsize > dest_len)
		result = src_len + dest_len;
	else
		result = dstsize + src_len;
	while (pt[i] && (dest_len + 1) < dstsize)
	{
		dst[dest_len] = pt[i];
		dest_len++;
		i++;
	}
	dst[dest_len] = '\0';
	return (result);
}
