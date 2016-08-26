# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboute <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 20:31:23 by nboute            #+#    #+#              #
#    Updated: 2016/08/22 12:53:49 by nboute           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

CC=gcc

CFLAGS= -Wall -Wextra -Werror

SRC = srcs/ft_atoi.c \
	  srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_str_is_numeric.c \
	  srcs/ft_strcmp.c \
	  srcs/tail.c

OBJ = ft_atoi.o \
	  ft_putchar.o \
	  ft_putstr.o \
	  ft_str_is_numeric.o \
	  ft_strcmp.o \
	  tail.o

all: $(NAME)

$(NAME):
		$(CC) -c $(CFLAGS) $(SRC)
		$(CC) $(OBJ) -o $(NAME)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
