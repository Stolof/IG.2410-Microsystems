#include <stdio.h>

int iterations = 1;

int powIterative(int a, int n){
  int sum = a;
  for (int i = 2; i <= n; i++) {
    sum = sum * a;
  }
  return sum;
}

int powRecursive(int a, int n){ // O(n)

  ++iterations;
  if (n == 1) {
    printf("%d \n", iterations);
    iterations = 1;
    return a;
  }
  return a * powRecursive(a, (n-1));
}

int imporvedPowRec(int a, int n){ // O(n/2)

  if( n % 2 == 0){
    int sum = powRecursive(a, n/2);
    return  (sum * sum);
  }
  else {
    int sum = (powRecursive(a, (n-1) / 2));
    return (a * sum * sum);
  }

}

int main(int argc, char const *argv[]) {

  printf("Iterativ power: %d\n", powIterative(2, 5) );
  printf("Recursively power: %d\n", powRecursive(2, 30) );
  printf("Recursively power: %d\n", imporvedPowRec(2, 30) );

  return 0;
}
