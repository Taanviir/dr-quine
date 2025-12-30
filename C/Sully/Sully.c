#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 5;
  if (i == 0) return 0;

  char filename[20], compile[50], execute[30];
  snprintf(filename, sizeof(filename), "Sully_%d.c", i-1);

  FILE *f = fopen(filename, "w");
  if (!f) return 1;

  char *src = "#include <stdio.h>%c#include <stdlib.h>%c%cint main() {%c  int i = %d;%c  if (i == 0) return 0;%c%c  char filename[20], compile[50], execute[30];%c  snprintf(filename, sizeof(filename), %cSully_%%d.c%c, i-1);%c%c  FILE *f = fopen(filename, %cw%c);%c  if (!f) return 1;%c%c  char *src = %c%s%c;%c  fprintf(f,src,10,10,10,10,i-1,10,10,10,10,34,34,10,10,34,34,10,10,10,34,src,34,10,10,10,10,34,34,10,10,10,34,34,10,10,10,10);%c  fclose(f);%c%c  snprintf(compile, sizeof(compile), %cgcc -Wall -Wextra -Werror -o Sully_%%d Sully_%%d.c%c, i-1, i-1);%c  system(compile);%c%c  snprintf(execute, sizeof(execute), %c./Sully_%%d%c, i-1);%c  system(execute);%c  return 0;%c}%c";
  fprintf(f,src,10,10,10,10,i-1,10,10,10,10,34,34,10,10,34,34,10,10,10,34,src,34,10,10,10,10,34,34,10,10,10,34,34,10,10,10,10);
  fclose(f);

  snprintf(compile, sizeof(compile), "gcc -Wall -Wextra -Werror -o Sully_%d Sully_%d.c", i-1, i-1);
  system(compile);

  snprintf(execute, sizeof(execute), "./Sully_%d", i-1);
  system(execute);
  return 0;
}
