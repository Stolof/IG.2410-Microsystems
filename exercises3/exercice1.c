#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {

  short index = 0;
  char texte[] = "Programmation\nC\n";
  char *ptr = malloc(strlen(texte) * sizeof(char));
  while (strlen(texte) > index) {
      *(ptr + index) = texte[index];
      index++;
    }
  printf("%s", ptr);
  return 0;
}
