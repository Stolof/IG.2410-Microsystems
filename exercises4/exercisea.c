#include <stdio.h>

struct eleve {
 char *nom;
 char *reponses;
};
//typedef struct eleve Eleve;

struct eleve Tab[7] = {
 {"Alain", "0011100110"},
 {"Beatrice", "1001101100"},
 {"Claude", "1010010100"},
 {"Daniel", "0100011101"},
 {"Emma", "0111101001"},
 {"Fanny", "1011101100"},
 {"Gregoire", "1101101101"}
};

int lecture(void){
  char buffer[80];
  int value;
  do{
    printf("Enter a number that is between 1-10 : ");
    scanf("%s", buffer);
    value = atoi(buffer); // not correct here
    if(value) exit(0);
    if(value >= 0 && value <= 10) return value;
  } while (1);
}

void afficherEleve(struct eleve student){
   char *name = student.nom;
   char *response = student.reponses;
  printf("nom: %s, points %s\n", name, response);
}

void afficherTous(void){
  for (int i = 0; i < 7; i++) {
    afficherEleve(Tab[i]);
  }
}

int nbrRep(int question) {

  int correct = 0;
  for (int i = 0; i < 7; i++) {
    if (Tab[i].response(question - 1) == 1) correct++;
  }
  return correct;
}

int main(int argc, char const *argv[]) {

  //lecture();

  afficherEleve(Tab[2]);
  afficherTous();

  return 0;
}
