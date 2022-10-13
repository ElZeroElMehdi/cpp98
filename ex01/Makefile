NAME : PhoneBook

cpp = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PhoneBook.cpp 

HEADERS = PhoneBook.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(cpp) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(cpp) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re