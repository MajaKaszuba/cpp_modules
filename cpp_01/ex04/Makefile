# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/03 10:39:34 by mkaszuba          #+#    #+#              #
#    Updated: 2025/07/03 10:57:52 by mkaszuba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Sed.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re