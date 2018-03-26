/* Might wanna include a if statement for 0 */ 
#include <stdio.h>

int facIterative(int a){
  int sum = 1;
  for (int i = 1; i <= a; i++) {
    sum = sum * i;
  }
  return sum;
}

int facRecursive(int a){

  if (a == 1) return a;
  return a * facRecursive(a - 1);
}

int main(int argc, char const *argv[]) {

  printf("Iterative: %d\n", facIterative(5));
  printf("recursively: %d\n", facRecursive(5));

  return 0;
}
