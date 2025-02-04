# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 11:28:41 by tnakajo           #+#    #+#              #
#    Updated: 2025/02/03 14:27:40 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Harl
SRC			= $(shell find -iname "*.cpp")
OBJ			= $(SRC:.cpp=.o)
RM			= rm -f
CPP			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 # -g -fsanitize=address -pedantic
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
# @echo "\nUsage : ./super_sed <filename> <old_string> <new_string>"
# @echo "First : touch test.txt && echo \"Hello, a 42 Zombie student\" >> test.txt"
# @echo "Second: ./super_sed test.txt \"Hello\" \"Hi\"\n"
	
%.o:%.cpp
	$(CPP) $(CXXFLAGS) -O0 -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
