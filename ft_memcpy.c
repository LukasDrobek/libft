/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 07:40:15 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/19 07:53:30 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- copies n bytes from memory area src to memory area dest
//	- does not account for memory overlaps

// Return value:
//	- NULL if dst or src are empty
//	- return a pointer to dst

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	if (!dst || !src)
		return (NULL);
	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	while (n > 0)
	{
		*dptr = *sptr;
		dptr++;
		sptr++;
		n--;
	}
	return (dst);
}
