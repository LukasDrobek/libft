/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 07:22:55 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/19 07:36:17 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- sets the first n bytes of the memory area pointed to by dst to the
//	  value c (converted to an unsigned char)

// Return value:
//	- returns the original pointer dst

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dst;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (dst);
}
