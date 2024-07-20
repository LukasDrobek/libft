/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 07:39:31 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/20 07:50:40 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- deletes the content of a node using the 'del' function passed as
//	  a parameter before freeing the memory of that node
//	- the memory of next must not be freed

// Return value:
//	- none

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
