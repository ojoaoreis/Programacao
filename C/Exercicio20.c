#include <stdio.h>
 
int main(int argc, char *argv[]){
  float p1, p2, media;
  
  printf("Digite a nota da P1: ");
  scanf("%f", &p1);
 
  printf("Digite a nota da P2: ");
  scanf("%f", &p2);
 
  media = (p1+(p2*2))/3;
 
  if (media >= 5){
      printf("Aprovado!");
  }
  else{
      printf("Reprovado!");
  }
  
  return 0;
}