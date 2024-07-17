/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:17:10 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/17 20:45:18 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return value:
//	- The length of the total string that it tried to create

// Null termination:
//	- the resulting string is truncated
//	- but it is guaranteed to be null-terminated

// Copy at most size - 1 characters

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(src);
	if (dsize != 0)
	{
		while (src[i] != '\0' && i < dsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (slen);
}
