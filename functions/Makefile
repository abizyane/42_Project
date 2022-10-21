# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abizyane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 11:33:24 by abizyane          #+#    #+#              #
#    Updated: 2022/10/19 11:33:39 by abizyane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CFLAGS := -Wall-Wextra-Werror
SRC := ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_bzero.c 
		ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_strchr.c ft_strlcat.c 
		ft_strlcpy.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBG := $(SRC:.c=.o)
NAME := libft.a

all: $(NAME)
$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBG)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re: fclean all
