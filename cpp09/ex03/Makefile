# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 06:30:23 by eelmoham          #+#    #+#              #
#    Updated: 2023/03/26 06:30:58 by eelmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

cpp = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PmergeMe.cpp main.cpp

headers = PmergeMe.hpp

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