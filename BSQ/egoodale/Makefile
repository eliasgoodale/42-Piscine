# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egoodale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/31 14:20:28 by egoodale          #+#    #+#              #
#    Updated: 2018/01/31 18:08:25 by egoodale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=bsq
SOURCE=*.c
HEADERS=ft.h
FLAGS=-Wall -Werror -Wextra
DEBUG=-g
all : $(NAME)
$(NAME):
	gcc $(FLAGS) -I $(HEADERS) -c $(SOURCE)
	gcc $(FLAGS) -o $(NAME) *.o
debug :
	gcc $(FLAGS) $(DEBUG) -I $(HEADERS) -c $(SOURCE)
	gcc $(FLAGS) $(DEBUG) -o $(NAME) *.o
clean :
	/bin/rm -rf $(NAME).dSYM
	/bin/rm -rf *.o
	/bin/rm -rf headers/*.gch
fclean :
	make clean
	/bin/rm -rf $(NAME)
re : fclean	all

