/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:55:25 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:48:46 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fills the first 'len' bytes of the memory area pointed to by 'b'
** with the byte 'c'.
**
** @param b: Pointer to the memory area to fill
** @param c: Byte value to set (converted to unsigned char)
** @param len: Number of bytes to set
** @return Pointer to the memory area 'b'
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pt;
	size_t			i;

	i = 0;
	pt = b;
	while (i < len)
	{
		pt[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
