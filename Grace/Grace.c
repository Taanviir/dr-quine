#include <stdio.h>
#define OUT_FILE "Grace_kid.c"
#define SRC "#include <stdio.h>%c#define OUT_FILE %cGrace_kid.c%c%c#define SRC %c%s%c%c#define FT() int main(){FILE *f=fopen(OUT_FILE,%cw%c);if(f){fprintf(f,SRC,10,34,34,10,34,SRC,34,10,34,34,10,10,10,10,10);fclose(f);}return 0;}%c/*%c  comment%c*/%cFT()%c"
#define FT() int main(){FILE *f=fopen(OUT_FILE,"w");if(f){fprintf(f,SRC,10,34,34,10,34,SRC,34,10,34,34,10,10,10,10,10);fclose(f);}return 0;}
/*
  comment
*/
FT()
