# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 02:56:40 by eelmoham          #+#    #+#              #
#    Updated: 2023/03/26 02:56:41 by eelmoham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

cpp = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp BitcoinExchange.cpp

headers = BitcoinExchange.hpp

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