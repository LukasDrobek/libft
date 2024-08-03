/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 08:00:29 by ldrobek           #+#    #+#             */
/*   Updated: 2024/08/03 20:23:46 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- iterates through the list and applied the fucntion 'f' on the
//	  content of each node and creates a new list
//	- the 'del' function is used to delete the content of a node if
//	  needed

// Return value:
//	- returns the new list
//	- returns NULL if the memory allocation fails

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst)
		return (NULL);
	new = NULL;
	node = NULL;
	while (lst)
	{
		if (f)
			node = ft_lstnew(f(lst->content));
		else
			node = ft_lstnew(lst->content);
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
