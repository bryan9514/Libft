# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 09:11:42 by brturcio          #+#    #+#              #
#    Updated: 2024/11/06 17:07:47 by brturcio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = $(addsuffix .c, ft_atoi ft_bzero ft_calloc ft_strjoin ft_isalnum ft_isalpha ft_isascii \
                      ft_isdigit ft_isprint ft_itoa ft_memchr ft_memcmp  ft_memcpy ft_memmove \
					  ft_memset ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd  ft_split ft_strchr \
					   ft_strdup ft_striteri ft_strlcat ft_strlcpy  ft_strlen \
					  ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower \
					  ft_toupper)

OBJ := $(SRC:%.c=%.o)

BONUS = $(addsuffix .c, ft_lstadd_back_bonus ft_lstadd_front_bonus ft_lstclear_bonus ft_lstdelone_bonus \
							ft_lstiter_bonus ft_lstlast_bonus ft_lstmap_bonus ft_lstnew_bonus ft_lstsize_bonus)

BONUS_OBJ := $(BONUS:%.c=%.o)

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)


so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

%.o:%.c
	$(CC) -c $(CCFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

bonus:  $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

.PHONY :  all clean fclean re bonus
