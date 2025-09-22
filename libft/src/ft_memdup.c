/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:53:44 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:47:44 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory and copies 'size' bytes from 'src' to the new memory.
**
** @param src: Pointer to the source memory area
** @param size: Number of bytes to copy
** @return Pointer to the newly allocated memory containing the copied data,
**         or NULL if allocation fails
*/

void	*ft_memdup(const void *src, size_t size)
{
	void	*dest;

	dest = malloc(size);
	if (dest != NULL)
		ft_memcpy(dest, src, size);
	return (dest);
}
