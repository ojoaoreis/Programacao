#include <stdio.h>

int main(int argc, char *argv[]){

  float p2, p1;
 
  printf("Digite a nota da P1: ");
  scanf("%f", &p1);
   
  p2 = (15-p1)/2;


  printf("A nota necessaria em P2 para aprovacao e %.1f", p2);
  
  return 0;
}