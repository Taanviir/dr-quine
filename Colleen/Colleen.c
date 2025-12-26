#include <stdio.h>

/*
  comment 1
*/

void foo(void) {
  char *s = "#include <stdio.h>%c%c/*%c  comment 1%c*/%c%cvoid foo(void) {%c  char *s = %c%s%c;%c  printf(s,10,10,10,10,10,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10);%c}%c%cint main() {%c  /*%c    comment 2%c  */%c  foo();%c  return 0;%c}%c";
  printf(s,10,10,10,10,10,10,10,34,s,34,10,10,10,10,10,10,10,10,10,10,10);
}

int main() {
  /*
    comment 2
  */
  foo();
  return 0;
}
