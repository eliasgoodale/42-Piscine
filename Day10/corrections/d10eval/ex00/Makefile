# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egoodale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 14:30:54 by egoodale          #+#    #+#              #
#    Updated: 2018/01/23 18:43:15 by egoodale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = -Wall -Werror -Wextra

H_LIBS = includes


all:
	gcc $(FLAGS) -I $(H_LIBS) -c $(SRCS) 
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

