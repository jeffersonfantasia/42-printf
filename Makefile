# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 19:25:06 by jfranchi          #+#    #+#              #
#    Updated: 2021/08/30 19:36:21 by jfranchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library
NAME = libftprintf.a

#Compilation
CC = gcc
FLAGS = -Wall -Werror -Wextra

#List all the source files with .c
SRCS =	ft_printf.c

#Generate files .o for "all" rule
OBJS = $(SRCS:.c=.o)

 ###############################################################################
#																				#
#										RULES									#
#																				#
 ###############################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $@ ./*.o
	@echo "$(NAME) has been created successfully!"

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

clean:
	@rm -vf *.o

fclean:	clean
	@rm -vf $(NAME)
	@rm -vf bonus

re:	fclean	all

.PHONY:	all, clean, fclear, bonus, re

git:
	git add .
	git commit -m "create or upload files"
	git push origin

.PHONY:	all, clean, fclean, re