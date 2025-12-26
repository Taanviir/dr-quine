# Makefile for Grace quine program

NAME = Grace
SRC = $(NAME).c
KID = Grace_kid.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME) $(KID)

fclean: clean

re: fclean all

test: $(NAME)
	./$(NAME)
	@diff $(SRC) $(KID) && echo "✓ Quine works! Output matches source code."

.PHONY: all clean fclean re test
