/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 05:47:12 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/21 08:59:37 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- allocates (malloc(3)) and returns a string representing the received
//	  integer
//	- negative numbers must be handled

// Return value:
//	- The string representing the integer
//	- NULL if the allocation fails

static int	ft_num_len(long num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*ft_num_to_str(char *res, long num, int len)
{
	res[len--] = '\0';
	if (num == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num *= -1;
	}
	while (num != 0)
	{
		res[len--] = num % 10 + 48;
		num /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*res;

	num = (long)n;
	len = ft_num_len(num);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res = ft_num_to_str(res, num, len);
	return (res);
}
