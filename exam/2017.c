#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cell{
  char *string;
  int counter;
  struct cell *next;
  struct cell *prev;
}
typedef struct cell Cell;
struct cell *start = NULL;

struct cell* findStr(char *str){

  cell *current = start;

  while(current !=NULL){
    if(strcmp(current->string, str) == 0){
      break;
    }
    current = current->next;
  }
  return current;
}

void insere(char *str){

  cell *current = start;
  cell *q = findStr(str);
  if( q != NULL){
    q->conter++;
  }
  else{
    q = malloc(sizeof(cell));
    q->string = strdup(str);
    q->counter = 1;
    q->prev = q->next = NULL;
    if(current == NULL){ // list is empty
      start = q;
    }
    else if (strcmp(q->string, current->string) < 0){ // IF the new one is gonna be the start
      q->next = current;
      current->prev = q;
      start = q;
    }
    while( current != NULL){
      if(strcmp(current->string, q->str) > 0){ // q > current
        q->next = current;
        q->prev = current->prev;
        current->prev = q;
      }
      if(current->next == NULL){ // if the next one is null, place q there.
        current->next = q;
        q->prev = current;
        break;
        }
      current = current->next;
    }
  }
}

int main(int argc, char const *argv[]) {

  return 0;
}
