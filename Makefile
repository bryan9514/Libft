# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 09:11:42 by brturcio          #+#    #+#              #
#    Updated: 2024/10/15 13:15:16 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = $(addsuffix .c, ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii \
                      ft_isdigit ft_isprint ft_memchr ft_memcmp  ft_memcpy ft_memmove \
					  ft_memset ft_strchr ft_strlcat ft_strlcpy  ft_strlen  ft_strncmp \
					  ft_strnstr ft_strrchr ft_tolower ft_toupper)

OBJS := $(SRC:%.c=%.o)

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME)$(OBJS)

%.o:%.c
	$(CC) -c $(CCFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY :  clean fclear re
