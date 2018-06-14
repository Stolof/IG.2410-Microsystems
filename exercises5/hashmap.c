#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct cell{
  char *string;
  struct cell *next;
};
typedef struct cell Cell;

Cell* hashtable[256];
char* hashtablefirst[256];

// a) this function does the modulu for me? WTF?
unsigned char hashFunc(char *str){
    char hash = '\0';
    do{
      hash = hash + *(str);
      //printf("%d\n", *str);
    }while(*(++str) != '\0');
    //hash = hash % 256;
    return hash;
}

void insert(char *str){
  int pos = hashFunc(str);
  hashtablefirst[pos] = str;
}

int search(char *str){
  int pos = hashFunc(str);
  if( hashtablefirst[pos] == NULL){
    return 0;
  }
  else {
    char *comp = strdup(hashtablefirst[pos]);
    if (strcmp(comp, str) == 0){
      return 1;
    }
  }
  return 0;
}

void insert2(char *str){
  Cell *newCell = malloc(sizeof(Cell));
  newCell->string = malloc(sizeof(str) + 1);
  strcpy(newCell->string, str);
  newCell->next = NULL;

  int pos = hashFunc(str);
  if(hashtable[pos] == NULL){
    hashtable[pos] = newCell;
  }
  else {
    Cell *current = hashtable[pos];
    while(current->next != NULL) current = current->next;
    current->next = newCell;
  }
  return;
}


int search2(char* str){
  int pos = hashFunc(str);
  Cell *current = hashtable[pos];
  while (current != NULL) {
    char *comp = strdup(current->string);
    if( strcmp(comp, str) == 0){
      return 1;
    }
    current = current->next;
  }
  return 0;
}

int main(int argc, const char *argv[]){

  for (int i = 0; i < 256; i++) {
    hashtable[i] = NULL;
  }
  for (int i = 0; i < 256; i++) {
    hashtablefirst[i] = NULL;
  }
  printf("%d\n", hashFunc("hello"));
  insert("hello");
  insert("Helloagain");
  printf("Does hello exist in first hashtable?: %d\n", search("hello"));
  printf("Does kale exist in table %d\n", search("Karl"));

  insert2("Hej");
  insert2("jeH");
  insert2("HejHej");
  printf("Does Hej exist in hashtable %d\n", search2("Hej"));
  printf("Does jeH exist in hashtable %d\n", search2("jeH"));
  printf("Does Kalle exist in hashtable %d\n", search2("Kalle"));

  return 0;
}
