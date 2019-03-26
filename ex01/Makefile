CC=clang++
CFLAGS=-Wall -Wextra -Werror
NAME=prompt
SRC= prompt.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

prompt: prompt.cpp
	clang++ $(CFLAGS) -o prompt prompt.cpp

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re