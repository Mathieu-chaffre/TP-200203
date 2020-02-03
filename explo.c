#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char lieu[20]= "montagne";
char lieu2[20]= "plage";
char decision[20];
int reponse;


int main(){
  printf("tu peux aller %s ou %s\n", lieu, lieu2);
printf("Ou veux tu aller ?\n");
scanf("%s", decision);


if(strcmp(decision, lieu2) == 0){
  printf("tu va a la plage");
}
if(strcmp(decision, lieu) == 0){
  printf("tu va a la montagne");

}


  return 0;