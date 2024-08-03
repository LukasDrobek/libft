# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldrobek <ldrobek@student.42prague.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/02 21:40:19 by ldrobek           #+#    #+#              #
#    Updated: 2024/08/03 20:02:11 by ldrobek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			libft.a

AR =			ar rcs

CC =			cc

CFLAGS =		-Wall -Wextra -Werror

HEADER =		libft.h

FNS =			ft_isalpha		\
				ft_isdigit		\
				ft_isalnum		\
				ft_isascii		\
				ft_isprint		\
				ft_toupper		\
				ft_tolower		\
				ft_strlen		\
				ft_strlcpy		\
				ft_strlcat		\
				ft_strchr		\
				ft_strrchr		\
				ft_strncmp		\
				ft_strnstr		\
				ft_substr		\
				ft_strjoin		\
				ft_strtrim		\
				ft_split		\
				ft_strmapi		\
				ft_striteri		\
				ft_calloc		\
				ft_memset		\
				ft_bzero		\
				ft_memcpy		\
				ft_memmove		\
				ft_memchr		\
				ft_memcmp		\
				ft_strdup		\
				ft_atoi			\
				ft_itoa			\
				ft_putchar_fd	\
				ft_putstr_fd	\
				ft_putendl_fd	\
				ft_putnbr_fd	\

BONUS_FNS =		ft_lstnew			\
				ft_lstadd_front		\
				ft_lstsize			\
				ft_lstlast			\
				ft_lstadd_back		\
				ft_lstdelone		\
				ft_lstclear			\
				ft_lstiter			\
				ft_lstmap			\

SRCS =			$(addsuffix .c, $(FNS))

OBJS =			$(addsuffix .o, $(FNS))

BONUS_SRCS =	$(addsuffix .c, $(BONUS_FNS))

BONUS_OBJS =	$(addsuffix .o, $(BONUS_FNS))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

