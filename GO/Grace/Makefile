# Makefile for Grace quine program in Go

NAME = Grace

all:
	go build -o $(NAME) $(NAME).go

run:
	go run $(NAME).go

test: all
	./$(NAME) | diff Grace.go -
	@echo "✓ Quine test passed!"

clean:
	rm -f $(NAME) Grace_kid.go

.PHONY: all run test clean
