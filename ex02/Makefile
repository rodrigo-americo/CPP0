NAME    = account
CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRC     = Account.cpp tests.cpp
OBJ     = $(SRC:.cpp=.o)
HEADER  = Account.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
