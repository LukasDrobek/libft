/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:54:55 by ldrobek           #+#    #+#             */
/*   Updated: 2024/07/20 07:34:24 by ldrobek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// External libraries
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

// List data structure
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

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
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);

// Memory functions
void	*ft_calloc(size_t n, size_t size);
void	ft_bzero(void *dst, size_t n);
void	*ft_memset(void *dst, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);

// Numerical functions
int		ft_atoi(const char *s);
char	*ft_itoa(int n);

// File descriptor functions
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);

// List manipulation
t_list	*ft_lstnew(void *content);
void	ft_lastadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void 	ft_lstadd_back(t_list **lst, t_list *new);

#endif