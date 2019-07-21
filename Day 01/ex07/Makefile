NAME = replace
SRC = main.cpp
CC = clang++
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
