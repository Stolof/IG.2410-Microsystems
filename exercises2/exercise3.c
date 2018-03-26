/* Ceasar cypher */

#include<stdio.h>

char * ceasarCypher(char str[], int d){
  int i = 0;
  while ( str[i] != '\0'){
    printf("%c %d\n", str[i], str[i]);
    str[i] = str[i] + 2;
    if (str[i] >= 123 || (str[i] > 90 && str[i] <= 97) ){
      str[i] = str[i] - 26;
    }
    if (str[i] == '\"'){
      str[i] = str[i] - 2;
    }
    printf("%c %d \n", str[i], str[i]);
    i++;
  }
  printf("%s\n", str);
  return str;

}

int main(int argc, char const *argv[]) {
  char str[] = "XYZ xyz";
  int d = 2;

  printf("%s\n", ceasarCypher(str, d));

  return 0;
}
