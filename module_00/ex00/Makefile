# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 14:43:44 by tnakajo           #+#    #+#              #
#    Updated: 2025/01/29 14:08:29 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRC			= megaphone.cpp
OBJ			= $(SRC:.cpp=.o)
RM			= rm -f
CPP			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
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

%.o:%.cpp
	$(CPP) $(CXXFLAGS) -O0 -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
