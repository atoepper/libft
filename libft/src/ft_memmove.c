/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:20:03 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:48:03 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies 'len' bytes from memory area 'src' to memory area 'dst'.
** The memory areas may overlap; copying is performed in a safe way.
**
** @param dst: Pointer to the destination memory area
** @param src: Pointer to the source memory area
** @param len: Number of bytes to copy
** @return Pointer to the destination memory area (dst)
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	if (dst == NULL && src == NULL)
		return (dst);
	if (dst > src && dst + len > src)
	{
		i = len ;
		while (i > 0)
		{
			i--;
			((char *)dst)[i] = ((const char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dst);
}
