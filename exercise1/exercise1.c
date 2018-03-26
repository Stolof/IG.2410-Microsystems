#include <stdio.h>

int main(int argc, char const *argv[]) {
  int numberOfIntegers = 0;
  int totalValue = 0;
  int number, lowest, biggest;
  while (1){
    printf("Please enter an interger \n");
    scanf("%d", &number);
    if (number == 0){
      break;
    }
    else if(number < lowest){
      lowest = number;
    }
    else if(number > biggest){
      biggest = number;
    }
      numberOfIntegers++;
      totalValue += number;
  }
  printf("The number of integers are: %d\n", numberOfIntegers );
  printf("The avrage number are: %f\n",((float)totalValue/numberOfIntegers));
  printf("The lowest number: %d\n", lowest);
  printf("The biggest number: %d\n", biggest);
  return 0;
}
