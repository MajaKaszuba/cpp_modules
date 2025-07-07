# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 17:31:20 by mkaszuba          #+#    #+#              #
#    Updated: 2025/05/12 13:39:04 by mkaszuba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C = c++
CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(C) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean re