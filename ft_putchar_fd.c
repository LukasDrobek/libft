/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 06:41:14 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/20 06:44:52 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description:
//	- outputs the character 'c' to the given file descriptor

// Return value:
//	- none

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
