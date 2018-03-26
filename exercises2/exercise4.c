/*  Is anagram, use a dictionary but is c its a matrix
First its just gonna work for uppercase letters.

Possible to do with a soring algorithm and then strcmp.

Using a bit too much space. A = 65, dose not work...
*/

#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[]){

  if (strlen(str1) != strlen(str2))
    return 0;

  int numberOfOccur[100];
  for (int i = 0; i < 100; i++){
    numberOfOccur[i] = 0;
  }
  for (int i = 0; str1[i] != '\0'; i++){
    numberOfOccur[str1[i]] += 1;
    printf("%d \n", numberOfOccur[str1[i]]);
  }
  for (int i = 0; str2[i] != '\0'; i++){
    numberOfOccur[str2[i]] -= 1;
    printf("%d \n", numberOfOccur[str2[i]]);
  }
  for (int i = 0; i < 100; i++){
    if (numberOfOccur[i] != 0){
      return 0;
    }
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  char str1[] = "TSARINEA";
  char str2[] = "ENTRAISB";

  printf("These are anangrams: %d\n", isAnagram(str1, str2));

  return 0;
}
