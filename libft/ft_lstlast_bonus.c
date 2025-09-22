/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:44:12 by alexander         #+#    #+#             */
/*   Updated: 2025/09/22 11:43:23 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** Returns the last element of the linked list 'lst'.
**
** @param lst: Pointer to the first element of the list
** @return Pointer to the last element, or NULL if the list is empty
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pt;

	if (lst == NULL)
		return (lst);
	pt = lst;
	while (pt->next != NULL)
		pt = pt->next;
	return (pt);
}
