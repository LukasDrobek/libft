/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:52:18 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/17 21:10:11 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return value:
//	- returns a pointer to the first occurence of the character c in string s
//	- the null-terminator is also considered a valid character

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}
