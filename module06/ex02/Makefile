NAME = real_type

cpp = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  base.cpp main.cpp

headers = A.hpp B.hpp C.hpp  base.hpp

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