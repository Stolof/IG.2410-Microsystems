#include <stdio.h>

int main(int argc, char const *argv[]) {
  int operand1, operand2;
  char operator;
  //printf("Enter the first operand: ");
  //scanf("%d", &operand1);
  //printf("Enter the second operand: ");
  printf("Enter a thing: \n");
  scanf("%d %c %d", &operand1, &operator, &operand2);
  //printf("Enter the operator ");
  //scanf("%c", &operator);

  switch (operator) {
    case '+': printf("The resulut is: %d",operand1 + operand2 ); break;
    case '-': printf("The resulut is: %d",operand1 - operand2 ); break;
    case '*': printf("The resulut is: %d",operand1 * operand2 ); break;
    case '/': printf("The resulut is: %d",operand1 / operand2 ); break;
    default: printf("You didnt enter a operator ");
  }
  return 0;
}
