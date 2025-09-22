/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:16:37 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:41:49 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets the first n bytes of the memory area pointed to by s to zero.
**
** @param s: Pointer to the memory area
** @param n: Number of bytes to set to zero
** @return None
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pt;
	size_t			i;

	pt = s;
	i = 0;
	while (i < n)
		pt[i++] = 0;
}
