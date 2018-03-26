#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number, positive = 0, negative = 0, null = 0, total;
  printf("Enter the amount of integers you would like to enter\n");

  scanf("%d",&total);
  for (int i = 0; i < total; i++) {
    printf("Your %d integer\n", i + 1);
    scanf("%d", &number);
    if (number > 0 ){
      positive++;
    }
    if(number < 0){
      negative++;
    }
    if(number == 0){
      null++;
    }
  }
  printf("Number of positive: %d number of neg: %d number of null: %d ",
positive, negative, null );

  return 0;
}
