# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaliber <egaliber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 11:49:46 by egaliber          #+#    #+#              #
#    Updated: 2021/11/01 13:50:37 by egaliber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS			=	-Wall -Wextra -Werror 
NAME			=	libft.a
SRCS			=	./srcs/
OPTION			=	-c $(HEADER)
FILES			=	$(SRCS)ft_putchar.c	$(SRCS)ft_putstr.c	\
 					$(SRCS)ft_strcmp.c	$(SRCS)ft_strlen.c	$(SRCS)ft_swap.c
OBJECTS			=	ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER			=	./includes/*.h

all:	$(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTION) $(FILES) $(HEADER)
	ar rc	$(NAME) $(OBJECTS)

clean:
	/bin/rm	-f $(OBJECTS)

fclean:	clean

	/bin/rm	-f	$(NAME)	

re:	fclean	all