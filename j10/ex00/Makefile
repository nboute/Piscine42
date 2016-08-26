# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nboute <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/15 18:16:23 by nboute            #+#    #+#              #
#    Updated: 2016/08/15 20:07:29 by nboute           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC=gcc

AR_RC=ar rc

CFLAGS= -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

OBJ = ft_putchar.o \
		  ft_putstr.o \
		  ft_strcmp.o \
		  ft_strlen.o \
		  ft_swap.o \

all: $(NAME)

$(NAME):
	$(CC) -c $(CFLAGS) $(SRC)
	$(AR_RC) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
