# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/27 16:48:51 by tnakajo           #+#    #+#              #
#    Updated: 2025/03/27 19:57:37 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
RM = rm -rf
NAME = Bureaucrat

SRCS = main.cpp Bureaucrat.cpp
HEADER = Bureaucrat.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98
FLAGS += -g3 -fsanitize=address

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "🎉 $(NAME) is ready to roll!"

%.o: %.cpp $(HEADER)
	${CC} ${FLAGS} -c $< -o $@
	@echo "⚙️  Compiled $< into $@"
# $<: An automatic variable representing the prerequisite (e.g., main.cpp in our example).
# -o $@: Specifies the output file. $@ is an automatic variable representing the target (e.g., main.o).

clean:
	$(RM) $(OBJS)
	@echo "🧹 Swept away the object files!"

fclean: clean
	$(RM) $(NAME)
	@echo "💥 $(NAME) obliterated!"

re: fclean all
	@echo "🔄 Reborn from the ashes!"

go: all run fclean

run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re go run

all: $(NAME)
	@echo "🌟 Cheers to the bureaucracy being complete!"
