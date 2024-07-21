/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 07:59:54 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/21 08:59:07 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- allocates (malloc(3)) and returns a substring from the string 's'
//	- the substring begins at index 'start' and is of maximum size 'len'

// Return value:
//	- the substring, or NULL if the allocation fails

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;
	size_t	rlen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < (size_t)start)
		return (ft_strdup(""));
	rlen = slen - (size_t)start;
	if (rlen < len)
		len = rlen;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
