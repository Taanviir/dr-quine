# Makefile for Sully quine program

NAME = Sully
SRC = $(NAME).c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME) $(NAME)_*.c ${NAME}_*

fclean: clean

re: fclean all

test: $(NAME)
	./$(NAME)
	@diff $(SRC) - && echo "✓ Quine works! Output matches source code."

.PHONY: all clean fclean re test
