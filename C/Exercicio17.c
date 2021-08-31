#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
  int A, B, C;
  
  printf("Digite o valor A (primeiro cateto): ");
  scanf("%i", &A);
 
  printf("Digite o valor B (segundo cateto): ");
  scanf("%i", &B);

  printf("Digite o valor C (hipotenusa): ");
  scanf("%i", &C);



  if((A*A)+(B*B)==(C*C)){
      printf("Este e um triangulo retangulo");
  }    
  else printf("Este triangulo nao e retangulo");

  return 0;
}