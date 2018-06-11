#include <stdio.h>
#include <string.h> // can only use strlen()
#include <stdlib.h>

char *repeatString(char *str, int count){
  // function a
  int length = strlen(str);
  char *cpy = malloc(strlen(str) * sizeof(char) * (count + 1)); //sizeof(char) = 1...
  char *cpy2 = malloc(strlen(str) * sizeof(char) * (count + 1));
  int j = 0;
  if (cpy == NULL){
    printf("Not enough memory\n");
    return 1;
  }
  for (int i = 0; i < length * count; i++) { // This is faster?
    *(cpy + i) = *(str + j); // Or it needs to read from different places
    j = (i + 1) % length;
  }

  for (int i = 0; i < length; i++) {
    char temp = *(str + i);           // reads from the same place
    for (int j = 0; j < count; j++) { // Can be done in reverse
        *(cpy2 + i + (j * length)) = temp;
    }
  }
  printf("%s\n", cpy2);
  return cpy;

}
char *reverseStr(char* str2){
  // function b
  int length = strlen(str2);
  char *cpy3 = malloc(strlen(str2) + 1);
  *str2 = *(str2 + length);
  if (cpy3 == NULL){
    printf("Not enough memory\n");
    return 1;
  }
  for (int i = 0; i < length; i++) {
    *(cpy3 + i) = *(str2 - i);
  }
  return cpy3;
}


int main(int argc, char const *argv[]) {
  //char str[] = "Unix";
  //int repeats = 3;


  printf("%s\n", repeatString("Unix", 3));

  printf("%s\n", reverseStr("Unixo"));

  return 0;
}
