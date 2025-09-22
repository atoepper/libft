/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:42:07 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:45:44 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** Creates a new list by applying the function 'f' to each element of
** the input list 'lst'. Uses 'del' to free content if allocation fails.
**
** @param lst: Pointer to the first element of the input list
** @param f: Function to apply to the content of each element
** @param del: Function to free content in case of allocation failure
** @return Pointer to the first element of the new list, or NULL on failure
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pt;
	t_list	*newlst;
	t_list	*new_node;
	void	*content;

	if (lst == NULL)
		return (lst);
	pt = lst;
	newlst = NULL;
	while (pt != NULL)
	{
		content = f(pt->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			if (content)
				del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new_node);
		pt = pt->next;
	}
	return (newlst);
}
