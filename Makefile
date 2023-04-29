# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariaavoletta <mariaavoletta@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 18:12:42 by marioliv          #+#    #+#              #
#    Updated: 2023/04/28 12:48:09 by mariaavolet      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

FILE = ft_format.c ft_printf.c

FILE_O = $(FILE:.c=.o)

RMOV = rm -f

STAT = ar -rcs 

$(NAME):	$(FILE_O)
			$(STAT) $(NAME) $(FILE_O)
all:	$(NAME)

clean:
	$(RMOV) $(FILE_O)
	
fclean:	clean
		$(RMOV) $(NAME)
		
re: fclean all

.PHONY: all  clean fclean re 
