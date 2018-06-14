#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cell{
  int occur;
  char* string;
  struct cell *next;
};
typedef struct cell Cell;

// could redo this a bit
struct cell *findStr(struct cell *start, char *str){
  Cell *current = start;

  while (current != NULL) {
    if(strcmp(current->string, str ) == 0){
      return current;
    }
    current = current->next;
  }
  return NULL;
}

// we only need to malloc strings when having new strings as input.
struct cell *tab2liste(char *T[]){
  struct cell *start = NULL;
  struct cell *p;
  int i = 0;

  while(T[i] != NULL){
  if((p = findStr(start, T[i])) != NULL){ // WTF IS THIS??? - lol old func we created...
    p->occur++;
  }
  else {
    p = malloc(sizeof(struct cell));
    p->occur = 1;
    p->string = T[i];
    p->next = start;
    start = p;
  }
i++;
}
  return start;
}

// we dont need to malloc space and shit? other wise just
/*int length = strlen(s1) + strlen(s2);
char *newstr = malloc(length + 1)
*newstr = *(s1 + i); */

void myStrcat(char *s1, char *s2){
  int length = strlen(s1);
  while(*s2++ != '\0'){
    *(s1++ + length) = *(s2);
  }
}


int countChar(char *str, char c){
  int counter = 0;
  while(*str != '\0'){
    if (*(str++) == c){
      counter++;
    }
  }
  return counter;
}

int contMultChar(char *str, char *cc){
  int counter = 0;
  int lengthCC = strlen(cc);
  int lengthSTR = strlen(str);
  for(int i = 0; i < lengthCC; i++){
    for(int j = 0; j < lengthSTR; j++){
      printf("for str %c for cc %c\n", *(str + i), *(cc + j));
      if(*(str + j) == *(cc + i)){
        counter++;
      }
    }
  }
  return counter;
}

int main(int argc, char const *argv[]) {
  //int k = contMultChar("Canadian appaloosa", "pan");
  //printf("%d\n", k);
  printf("%d\n", countChar("anticonstitutionnellement", 't'));
  return 0;
}
