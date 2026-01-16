# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/03 15:17:10 by mkaszuba          #+#    #+#              #
#    Updated: 2026/01/03 17:34:09 by mkaszuba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
       Bureaucrat.cpp \
	   AForm.cpp \
	   ShrubberyCreationForm.cpp \
	   RobotomyRequestForm.cpp \
	   PresidentialPardonForm.cpp \
	   Intern.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
