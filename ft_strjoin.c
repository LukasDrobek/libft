/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:06:20 by ldrobek           #+#    #+#             */
/*   Updated: 2024/08/02 16:25:38 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- allocates (malloc(3)) and returns a new string which is the
//	  result of the concatenation of s1 and s2

// Return value:
//	- the new string
//	- NULL if the allocation fails

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	pos;
	char	*res;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	pos = 0;
	while (*s1)
		res[pos++] = *s1++;
	while (*s2)
		res[pos++] = *s2++;
	res[pos] = '\0';
	return (res);
}
