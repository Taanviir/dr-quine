# Makefile for Colleen quine program

NAME = Colleen
SRC = $(NAME).c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

test: $(NAME)
	@./$(NAME) | diff $(SRC) - && echo "✓ Quine works! Output matches source code."

.PHONY: all clean fclean re test
