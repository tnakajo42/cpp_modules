# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 16:14:37 by tnakajo           #+#    #+#              #
#    Updated: 2025/04/06 15:40:13 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutatedAdomination

CC = c++
RM = rm -rf

# SRCS = main.cpp
SRCS = main_test.cpp
HEADER = ./inc/MutantStack.hpp

OBJ_DIR	= obj
# OBJS	= $(OBJ_DIR)/main.o
OBJS	= $(OBJ_DIR)/main_test.o

FLAGS	= -Wall -Wextra -Werror -std=c++98
# FLAGS	+= -g3 -fsanitize=address

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

go: all run fclean

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re go run

all: $(NAME)
