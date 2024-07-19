/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 07:50:48 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/19 13:17:15 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- copies n bytes from memory area src to memory area dest
//	- the memory areas may overlap:

// Memory overlap:
//	- copying takes place as though the bytes in src are first copied into a
//	  temporary array that does not overlap src or dest, and the bytes are
//	  then copied from the temporary array to dest
//	- if dst pointer is between the src pointer and the index n, src will be
//	  copied from the front to prevent unwanted data modifications
//	- otherwise it will be copied front to back

// Return value:
//	- returns a pointer to dst

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	if (!dst || !src)
		return (NULL);
	if (dst == src || n == 0)
		return (dst);
	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	if (dptr < sptr)
	{
		ft_memcpy(dptr, sptr, n);
	}
	else
	{
		while (n--)
		{
			*(dptr + n) = *(sptr + n);
		}
	}
	return (dst);
}
