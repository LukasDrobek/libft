/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:47:19 by ldrobek           #+#    #+#             */
/*   Updated: 2024/08/03 20:04:13 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- deletes and frees the given node including every successor using
//	  the function 'del' and free(3)
//	- the pointer to the list must be reset to NULL

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!(*lst))
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}
