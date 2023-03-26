# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 06:39:14 by eelmoham          #+#    #+#              #
#    Updated: 2023/03/26 06:30:05 by eelmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

cpp = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp RPN.cpp

headers = RPN.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(cpp) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(headers)
	$(cpp) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re