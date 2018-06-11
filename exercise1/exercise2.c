/* Print out the alphabet*/
#include <stdio.h>

int main(int argc, char const *argv[]) {

  char c;
  for (c = 'a'; c != 'z'; c++){
    printf("%c\n", c);
  }
  for (c = 'A'; c != 'Z'; c++){
    printf("%c\n", c);
  }

  return 0;
}
