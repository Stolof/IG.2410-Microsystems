#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct cell{
  char *string;
  struct cell *next;
};
typedef struct cell Cell;

int compte(Cell *debut){ // Do i need struct all the fucking time?
  int counter = 1;
  Cell* current = debut;
  while (current->next != NULL) {
    counter++;
    current = current->next;
  }
  return counter;
}

Cell *insere(Cell *debut){ // add string
  Cell *pointer = malloc(sizeof(Cell));

  char buffer[100];
  printf("Enter the string\n");
  scanf("%s", buffer);

  pointer->string = malloc(strlen(buffer) + 1);
  strcpy(buffer,pointer->string);

  pointer->next = NULL;

  // Now for the search
  Cell* current = debut;
  Cell* prev = NULL;
  if(current == NULL || strcmp(pointer->string, current->string) < 0 ){
    return pointer;
  }
  while (current->next != NULL) {

    if (strcmp(pointer->string, current->string) < 0) {
      pointer->next = current;
      prev->next = pointer;
      break;
    }
    prev = current;
    current = current->next;
  }
  return debut; // not always
}


int main(int argc, char const *argv[]) {
  Cell *top = NULL;
  Cell *one = insere(top);
  Cell *two = insere(one);
  Cell *three = insere(two);

  int counter = compte(top);
  printf("The counter is: %d\n", counter);
  return 0;
}
