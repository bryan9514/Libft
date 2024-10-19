# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 09:11:42 by brturcio          #+#    #+#              #
#    Updated: 2024/10/19 16:48:17 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = $(addsuffix .c, ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii \
                      ft_isdigit ft_isprint ft_memchr ft_memcmp  ft_memcpy ft_memmove \
					  ft_memset ft_strchr  ft_strdup ft_strlcat ft_strlcpy  ft_strlen  ft_strncmp \
					  ft_strnstr ft_strrchr ft_substr ft_tolower ft_toupper)

OBJ := $(SRC:%.c=%.o)

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o:%.c
	$(CC) -c $(CCFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY :  all clean fclean re
