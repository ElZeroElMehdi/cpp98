NAME = FragTrap

cpp = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ClapTrap.cpp  main.cpp  ScavTrap.cpp FragTrap.cpp

headers = ClapTrap.hpp  ScavTrap.hpp FragTrap.hpp

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