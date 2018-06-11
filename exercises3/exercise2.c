
#include <stdio.h>

int valeurs[3] = {2, 4, 12};

int main(int argc, char **argv) {

  int *p = valeurs;

  printf("%d\n", ++(*(p++))); // ++ the value and then after return ++ the p
  printf("%d\n", ++(*p)); // ++ the value
  printf("%d\n", *(++p)); // ++ the pointer
  printf("%d\n", (*p)++); // dont know

  printf("%d\n%d\n%d\n%d\n", ++(*(p++)), ++(*p), *(++p), (*p)++);
  // no return will happen?
  // warning, but same output...

  // May we replace the p variable with valeurs int the 4 printf ?
  // I dont understand the question
  return 0;
}
