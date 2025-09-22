/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:14:37 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:47:26 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dst.
** The memory areas must not overlap.
**
** @param dst: Pointer to the destination memory area
** @param src: Pointer to the source memory area
** @param n: Number of bytes to copy
** @return Pointer to the destination memory area (dst)
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
