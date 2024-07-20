/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:56:56 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/20 07:59:47 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- iterates through the list and applies the function 'f' on
//	  content of each node

// Return value:
//	- none

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
