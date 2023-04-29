# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 18:12:42 by marioliv          #+#    #+#              #
#    Updated: 2023/04/29 16:28:05 by marioliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

FILE = ft_character.c ft_string.c ft_number.c ft_unsigned.c \
		ft_hexa.c ft_adress.c ft_printf.c

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
