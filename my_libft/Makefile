# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/09 12:13:44 by vmiron            #+#    #+#              #
#    Updated: 2017/12/09 16:21:01 by vmiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILER = clang
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = *.o


all:  $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)

$(OBJ):
		@$(COMPILER) -c $(FLAGS) $(SRC)

clean:
		@-rm -f *.o

fclean: clean
		@-rm -f $(NAME)
		@-rm -f main
main:
	clang -o main $(OBJ)
e: fclean all main
	./main


re: fclean all

t:
	cd ../libft-unit-test