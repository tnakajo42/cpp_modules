# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 14:43:44 by tnakajo           #+#    #+#              #
#    Updated: 2025/01/29 10:15:19 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)
RM			= rm -f
CPP			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CXXFLAGS) -O0 $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CPP) $(CXXFLAGS) -O0 -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
