// TRY to do it recursively instead ??
// Could change the foorloop until the value is equal to null
// Provide the size of the parameter, if not using 0

#include <stdio.h>

int CompareChainesRec(char ch1[], char ch2[]){
  printf("%c %c\n", ch1[0] , ch2[0]);
  if ((ch1[0] == 0) && (ch2[0] == 0)) return 0;
  if (ch1[0] < ch2[0]) return -1;
  if (ch1[0] > ch2[0]) return 1;  // not sure if i agree with alpabetic order.
  return (CompareChainesRec(&ch1[1], &ch2[1]));
}
/*
int CompareChaines(char ch1[],char ch2[]){

for (int i = 0; ch1[i] != '\0'; i++) {

  for (int j = i; ch2[j] != '\0'; j++) {
    if( ch1[i] > ch2[j]){
      return -1;
    }
  }
}

for (int i = 0; ch1[i] != '\0' && ch1[i] != '\0'; i++) {

  printf("%d %d ", ch1[i], ch2[i]);

  if (ch1[i] != ch2[i]){
    return 1;
  }
}

return 0;
}; */

int main(int argc, char const *argv[]) {
  char str1[] = "bonjour";
  char str2[] = "bonjour";
  char str3[] = "au revoir";

  int result = CompareChainesRec(str3,str2);

  printf("\nThey are: %d\n", result);

  return 0;
}
