# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/29 22:45:18 by tnakajo           #+#    #+#              #
#    Updated: 2025/04/03 19:17:51 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CC = c++
RM = rm -rf

SRCS = $(shell find . -iname "*.cpp")
HEADER = $(shell find . -iname "*.hpp")

INCS_DIR	= ./inc/
MAIN_INC	= -I $(INCS_DIR)
INCS		= $(shell find $(INCS_DIR) -type f -name "*.hpp")

OBJ_DIR	= obj
OBJS	= $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))

FLAGS	= -std=c++98
# FLAGS	= -Wall -Wextra -Werror -std=c++98
# FLAGS	+= -g3 -fsanitize=address

$(NAME): $(OBJS) $(INCS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(INCS) $(HEADER)
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
