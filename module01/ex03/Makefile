NAME = human

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = HumanA.cpp  HumanB.cpp   Weapon.cpp  main.cpp

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re