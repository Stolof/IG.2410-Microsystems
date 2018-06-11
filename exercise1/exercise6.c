#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int random = random() % 1000;
  int gues = 1001;
  int i = 0;
  while (i < 10){
    printf("Enter a gues between 0 and 1000");
    scanf("%d", &gues);
    if (gues == random) {
      printf("Congrats, the right number was %d\n" random);
      break;
    }
    if (gues < random) {
      printf("%s/n", "Enter a lower number")
    }
    else printf("%s\n", "Enter a greater number");
    i++
  }

  return 0;
}
