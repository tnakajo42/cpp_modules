# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/27 16:48:51 by tnakajo           #+#    #+#              #
#    Updated: 2025/03/29 15:20:20 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
RM = rm -rf
NAME = Intern

SRCS = $(shell find -iname "*.cpp")
HEADER = $(shell find -iname "*.hpp")

FLAGS = -Wall -Wextra -Werror -std=c++98
FLAGS += -g3 -fsanitize=address

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	${CC} ${FLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

go: all run fclean

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re go run

all: $(NAME)
