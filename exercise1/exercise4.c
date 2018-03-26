#include <stdio.h>

int main(int argc, char const *argv[]) {
  int input; //temp;
  //int divider = 1;
  //int mod = 10;

  printf("Enter a integer: ");
  scanf("%d", &input);

  if(input == 0){
    printf("%d\n", input);
    return 0;
  }
  while (input != 0 ) {
    //temp = (input % mod);
    printf("%d\n", input%10);
    input = (input - (input%10))/10;
    //mod = mod * 10;
    //divider = divider * 10;

  }

  return 0;
}
