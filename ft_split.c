/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:38:48 by ldrobek           #+#    #+#             */
/*   Updated: 2024/08/02 17:46:33 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- allocates (malloc(3)) and retursn an array of strings obtained by
//	  splitting s using character c as delimiter
//	- the array must end with a NULL pointer

// Return value:
//	- the array of new strings resulting from the split
//	- NULL if the allocation fails

// "//hello/how/are///you/today/?"
// { "hello", "how", "are", "you", "today", "?" }

static size_t	ft_skip(const char *s, char c)
{
	size_t	start;

	start = 0;
	while (s[start] && s[start] == c)
		start++;
	return (start);
}

static size_t	ft_get_len(const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = ft_skip(s, c);
	len = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		len++;
	}
	return (len);
}

static void	ft_free(char **res, size_t pos)
{
	while (pos > 0)
		free(res[--pos]);
	free(res);
}

char	**ft_split(const char *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	pos;
	char	**res;

	res = malloc((ft_get_len(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	start = ft_skip(s, c);
	pos = 0;
	while (s[start])
	{
		end = start;
		while (s[end] && s[end] != c)
			end++;
		res[pos++] = ft_substr(s, start, end - start);
		if (!res[pos - 1])
		{
			ft_free(res, pos - 1);
			return (NULL);
		}
		start = ft_skip(s + end, c);
	}
	res[pos] = NULL;
	return (res);
}
