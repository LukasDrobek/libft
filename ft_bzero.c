/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 07:16:16 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/19 07:34:56 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- sets the first n bytes of the memory area pointed to by dst to zero

// Return value:
//	- does not return a value

void	ft_bzero(void *dst, size_t n)
{
	ft_memset(dst, 0, n);
}
