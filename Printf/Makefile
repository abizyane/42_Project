# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abizyane <abizyane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 16:32:31 by abizyane          #+#    #+#              #
#    Updated: 2022/11/22 21:03:45 by abizyane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putchar.c ft_putstr.c putnbr_u.c putnbr_id.c putnbr_hx.c putnbr_X.c

OBJ = $(SRC:.c=.o)
RM = rm -f
AR = ar -rc
NAME = libftprintf.a
HEADER = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $(OBJ)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean all re
