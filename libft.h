/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:54:55 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/17 21:29:18 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// External libraries
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

// Characters functions
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
int		ft_tolower(int c);
int		ft_toupper(int c);

// String functions
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

// Memory functions

// Numerical functions

// File descriptor functions

// List manipulation

#endif