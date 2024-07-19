/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:23:10 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/19 16:50:54 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- scans the inital n bytes of the memory area pointed to by src for the
//	  first instance of c
//	- both c and the bytes of the memory area pointed to by s are interpreted
//	  as unsigned char

// Return value:
//	- return a pointer to the matching byte or NULL if the character does not
//	  occur in the given memory area

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)src;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
