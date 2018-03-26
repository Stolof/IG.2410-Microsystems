#include <stdio.h>
//#include <string.h>

int main(int argc, char const *argv[]) {
  char myString[100];
  int numberOfChar = 0;
  printf("Input string \n");
  gets(myString);
  printf("Intput is %s\n", myString);
  while (myString[numberOfChar]!= 0) {
    numberOfChar++;
  }
  printf("Number of char %d", numberOfChar);
  // USE puts OR gets, fgets!!!
  // We cannot use strln()
  return 0;
}
