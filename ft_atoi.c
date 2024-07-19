/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 17:15:37 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/19 17:25:45 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
// - converts the initial portion of the string pointed to by s to an int
// - handles leading whitespace, optional sign, and numeric characters

// Return value:
//	- returns the converted integer value

// Whitespace:
//	- space, form-feed ('\f'), newline ('\n'), carriage return ('\r'),
//	  horizontal tab ('\t'), and vertical tab ('\v')

int	ft_atoi(const char *s)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == 43 || *s == 45)
		sign = 44 - *s++;
	while (ft_isdigit(*s))
	{
		num *= 10;
		num += *s - 48;
		s++;
	}
	return (num * sign);
}
