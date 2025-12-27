# Makefile for Sully quine program in Go

NAME = Sully

all:
	go build -o $(NAME) .

run:
	go run $(NAME).go

test: all
	./$(NAME) | diff Sully.go Sully_1.go
	@echo "✓ Quine test passed!"

clean:
	rm -f $(NAME) Sully_*.go Sully_*

.PHONY: all run test clean
