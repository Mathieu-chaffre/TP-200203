#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char decision[20];
int reponse =1;
int loop =1;
int compteur =0;
int save;

struct Lieu{

char nom[25];
int difficulte;
int tableau[19];
char desc[1000];

};

typedef struct Lieu lieu;



void nom( char * decision, lieu * lieu){
reponse =0;
reponse = strcmp(decision, (*lieu).nom  );



}

void deplacement(lieu * lieux){
  while(reponse !=0 && compteur <=3){
   compteur +=1;
   nom(decision, &lieux[compteur]);
   save = compteur;
}
   compteur = 0;
if(reponse == 0){
  printf("Tu te dirige vers %s\n ", decision);
  printf("%s", lieux[save].desc);
}

}



int main(){


  lieu lieux[20];
  lieux[1].difficulte = 1;
  strcpy(lieux[1].nom, "plage");
  strcpy(lieux[1].desc, "tu arrive sur une magnifique plage pleins de poissons morts");
  lieux[1].tableau[1] = 2 ;
  lieux[1].tableau[2] = 3 ;

  lieux[2].difficulte = 2;
  strcpy(lieux[2].nom, "montagne");
  strcpy(lieux[2].desc, "tu arrive sur vers une montagne avec un cimetiere abandonne");
  lieux[2].tableau[1] = 1 ;
  lieux[2].tableau[2] = 3 ;

  lieux[3].difficulte = 3;
  strcpy(lieux[3].nom, "village");
  strcpy(lieux[3].desc, "tu arrive sur vers un village magnifique de riche");
  lieux[3].tableau[1] = 2 ;
  lieux[3].tableau[2] = 1 ;




  printf("tu peux aller %s ou %s ou encore %s\n", lieux[1].nom , lieux[2].nom, lieux[3].nom );
printf("Ou veux tu aller ?\n");
scanf("%s", decision);

deplacement(&lieux[0]);







  return 0;
}
