# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 12:44:02 by jomaia            #+#    #+#              #
#    Updated: 2025/04/15 17:11:35 by jomaia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRCS= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c\
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c
COMP_LIB = ar rcs
RM= rm -f
CC= cc
CC_FLAGS= -c -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
ADD = $(SRCS)

all:$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(OBJS):
	$(CC) $(CC_FLAGS) $(ADD)

$(NAME): $(OBJS)
	$(COMP_LIB) $(NAME) $(OBJS)

