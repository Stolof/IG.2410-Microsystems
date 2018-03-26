#include <stdio.h>
#include <string.h> // can only use strlen()
#include <stdlib.h>

char *repeatString(char *str, int count){

  int length = strlen(str);
  char *cpy = malloc(strlen(str) * sizeof(char) * count);

  for (int i = 0; i < length; i++) {
    
  }
}

int main(int argc, char const *argv[]) {
  //char str[] = "Unix";
  //int repeats = 3;


  repeatString("Unix", 3);
  return 0;
}
