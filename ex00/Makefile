CC=clang++
CFLAGS=-Wall -Wextra -Werror
NAME=megaphone
SRC= megaphone.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

megaphone: megaphone.cpp
	clang++ $(CFLAGS) -o megaphone megaphone.cpp

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re