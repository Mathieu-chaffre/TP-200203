#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char lieu[20]= "montagne";
char lieu2[20]= "plage";
char decision[20];
int reponse;

void nom(char * nom1, char * nom2){
  int reponse;
reponse = strcmp( lieu, decision );

}

int main(){
  printf("tu peux aller %s ou %s\n", lieu, lieu2);
printf("Ou veux tu aller ?\n");
scanf("%s", decision);

nom(lieu, decision);
nom(lieu2, decision);



if(reponse <0 || reponse  > 0){
  printf("ce lieu n'existe pas");
}
else if (reponse == 0){
  printf("tu va %s", decision);
}


  return 0;
}
