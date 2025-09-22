/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoepper <atoepper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:41:38 by atoepper          #+#    #+#             */
/*   Updated: 2025/09/22 11:43:13 by atoepper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** Iterates over each element of the linked list 'lst' and applies
** the function 'f' to the content of each element.
**
** @param lst: Pointer to the first element of the list
** @param f: Function to apply to the content of each element
** @return None
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pt;

	pt = lst;
	if (lst == NULL)
		return ;
	while (pt != NULL)
	{
		f(pt->content);
		pt = pt->next;
	}
}
