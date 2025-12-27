NAME = Colleen

all: $(NAME)

$(NAME): $(NAME).o
	gcc $(NAME).o -o $(NAME)

$(NAME).o: $(NAME).s
	nasm -f elf64 $(NAME).s -o $(NAME).o

clean:
	rm -f $(NAME).o $(NAME)

test: $(NAME)
	./$(NAME) | diff $(NAME) -

.PHONY: all clean test
