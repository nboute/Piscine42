#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbossard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/17 12:17:09 by cbossard          #+#    #+#              #
#    Updated: 2016/08/20 15:04:45 by cbossard         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME= colle-2

SOURCE= functions/ft_putchar.c \
functions/ft_putstr.c \
functions/ft_strcpy.c \
functions/ft_strlen.c \
srcs/fill_tab_colles.c \
srcs/ft_count.c \
srcs/ft_read.c \
functions/ft_putnbr.c \
srcs/main.c \
functions/ft_strcmp.c

POINTO= ft_putchar.o \
ft_putstr.o \
ft_strcpy.o \
ft_strlen.o \
fill_tab_colles.o \
ft_count.o \
ft_read.o \
ft_putnbr.o \
main.o \
ft_strcmp.o

FLAG= -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SOURCE) -I .includes/
	gcc -o $(NAME) $(POINTO)

clean:
	rm -rf $(POINTO)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
