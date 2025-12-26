# Dr Quine

A collection of C implementations exploring the concept of **quines** — programs that produce their own source code as output.

## What is a Quine?

A quine is a self-replicating program that outputs its own source code without taking any input. It's a fascinating exercise in programming that requires careful handling of both code and data through string escaping and metaprogramming techniques.

Example of a quine in Python:
```python
s='s%r;print(s%%s)';print(s%s)
```

Example of a quine in C:
```c
#include <stdio.h>
int main() {
    char *s = "#include <stdio.h>%c%cint main() {%c    char *s = %c%s%c;%c    printf(s, 10, 10, 10, 34, s, 34, 10, 10);%c    return 0;%c}%c";
    printf(s, 10, 10, 10, 34, s, 34, 10, 10);
    return 0;
}
```

## Projects

- **Colleen**: A simple quine that prints its own source code
- **Grace**: A quine that creates a child file (`Grace_kid.c`) with the same source code
- **Sully**: An advanced quine that recursively generates numbered versions of itself (Sully_5 → Sully_4 → ... → Sully_0), compiling and executing each generation

## Building

Each project has its own `Makefile`. To build:
```bash
cd <ProjectName>/<Language>
make
```

Then run the compiled executable to see it in action.

## Resources

- [Lex Fridman - Quines](https://www.youtube.com/watch?v=a-zEbokJAgY)
- [Wikipedia - Quine](https://en.wikipedia.org/wiki/Quine_(computing))
