/* */

#include <stdio.h>
#include <string.h>

int subString(char str1[], char str2[]){

  for (int i = 0; str1[i] != '\0'; i++) {
    for (int j = 0; str1[i +j] != ' '; j++) {
      if((j+1) == strlen(str2))
        return i;
      else if(str1[i + j] != str2[j])
        break;

    }
  }
  return -1;

}

int main(int argc, char const *argv[]) {
  char str1[] = "ma belle bababouche me";
  char str2[] = "babouche";

  printf("The index of the first occurence: %d\n", subString(str1, str2));

  return 0;
}
