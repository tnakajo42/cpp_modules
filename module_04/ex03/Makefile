# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 14:34:17 by tnakajo           #+#    #+#              #
#    Updated: 2025/02/20 21:17:18 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= InterfaceAndRecap # this is a rule and ready to go, not change the rule
SRC			= $(shell find -iname "*.cpp")
OBJ			= $(SRC:.cpp=.o)
RM			= rm -f
CPP			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
# CXXFLAGS	+= -g -fsanitize=address -pedantic
#	Without -pedantic: 
#		The compiler may allow certain language extensions
#		or features beyond the specified C++ standard.
#	With -pedantic:
#		The compiler gives warnings or errors
#		if it detects any code that doesn’t strictly conform
#		to the C++98 standard, ensuring greater portability and strictness.

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CXXFLAGS) -O0 $(OBJ) -o $(NAME)
	@echo "\nUsage : ./InterfaceAndRecap | cat -e"
	
%.o:%.cpp
	$(CPP) $(CXXFLAGS) -O0 -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
