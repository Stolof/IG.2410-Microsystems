#include <stdio.h>
#include <stdlib.h>

/*
int NmOccurancesTab(int tab[], int n, int a){ // This dose not need a nested loops
  int count = 1;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if (tab[i] == a){
        count = count + 1;
        break;
      }
    }
  }
  return count;
}
*/

int NmOccurancesTab(int tab[], int n, int a){
  int count = 0;
  for(int i = 0; i < n; i++){
    if (tab[i] == a){
    count = count + 1;
    }
  }
  return count;
}

int ContientDoublonsTab(int tab[], int n){

  for(int i = 0; i < n; i++){
    if (NmOccurancesTab(tab, n, tab[i]) > 1 ) return 1;
    }
    return 0;
  }


int main(int argc, char const *argv[]) {
  int array[] = {1,2,3,4,1,1,1};
  int check = 1;
  int size = sizeof(array) / sizeof(int);
  printf("Number of occurence: %d\n", NmOccurancesTab(array, size, check));
  printf("Does it occur: %d\n", ContientDoublonsTab(array, size));
  return 0;
}
