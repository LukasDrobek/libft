/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:04:06 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/17 21:14:03 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return value:
//	- returns a pointer to the last occurence of the character c in string s
//	- the null-terminator is also considered a valid character

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	char			*s_last;

	uc = (unsigned char)c;
	s_last = (char *)s + ft_strlen(s);
	while (s_last >= s)
	{
		if ((unsigned char)*s_last == uc)
			return ((char *)s_last);
		s_last--;
	}
	return (NULL);
}
