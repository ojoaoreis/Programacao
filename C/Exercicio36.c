#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int numeros[20], multi, resul, i;
  
  printf("Digite os 20 numeros: ");
  for(i=1; i<=20; i++){
    scanf("%i", &numeros[i]);
  }
  
  printf("Digite o valor da constante multiplicadora: ");
  scanf("%i", &multi);

  for(i=1; i<=20; ++i){
    resul = (numeros[i] * multi);
    printf("\nO valor de %i vezes %i e: %i", numeros[i], multi, resul);    
  }

  return 0;
}