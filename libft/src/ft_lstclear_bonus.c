/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:04:57 by alexander         #+#    #+#             */
/*   Updated: 2025/09/22 11:42:38 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees all elements of the linked list pointed to by 'lst',
** using the function 'del' to free the content of each element.
** Sets the list pointer to NULL after clearing.
**
** @param lst: Pointer to the first element of the list
** @param del: Function to free the content of each element
** @return None
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pt;

	if (lst == NULL || *lst == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		pt = *lst;
		*lst = (*lst)->next;
		del(pt->content);
		free(pt);
	}
	pt = *lst;
	*lst = (*lst)->next;
	del(pt->content);
	free(pt);
}
