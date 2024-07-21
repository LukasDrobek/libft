/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:10:09 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/21 08:44:40 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*res;

	len = ft_strlen(s) + 1;
	if (!(res = malloc(len * sizeof(char))))
		return (NULL);
	ft_memcpy(res, s, len);
	return (res);
}
