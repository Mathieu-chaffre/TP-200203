#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char lieu[20]= "montagne";
char lieu2[20]= "plage";
int decision=0;

int main(){
  printf("tu peux aller %s ou %s\n", lieu, lieu2);
printf("Ou veux tu aller ?\n");
scanf("%d", &decision);
switch(decision){
  case 1:
  printf("tu va  : %s", lieu);
  break;
  case 2:
  printf("Tu va : %s", lieu2);
}


  return 0;
}
