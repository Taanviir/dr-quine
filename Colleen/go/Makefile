# Makefile for Colleen quine program in Go

NAME = Colleen

all:
	go build -o $(NAME) .

run:
	go run $(NAME).go

test: all
	./$(NAME) | diff $(NAME).go -
	@echo "✓ Quine test passed!"

clean:
	rm -f $(NAME)

.PHONY: all run test clean
