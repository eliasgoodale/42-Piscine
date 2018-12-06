# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egoodale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 15:14:36 by egoodale          #+#    #+#              #
#    Updated: 2018/01/27 17:45:41 by egoodale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
LIBS = include
SRCS = src/valid_rush.c src/print_rush.c src/check_corners.c src/main.c src/get_dimensions.c src/print_results.c src/ft_putstr.c src/ft_putnbr.c src/ft_putchar.c 
OBJS = *.o

CFLAGS = -Wall -Werror -Wextra

all:
	gcc $(CFLAGS) -I$(LIBS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all