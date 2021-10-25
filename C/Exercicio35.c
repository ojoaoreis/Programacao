#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int numeros[10], multi, resul, i;
  
  printf("Digite os 20 numeros: ");
  for(i=1; i<=20; i++){
    scanf("%i", &numeros[i]);
  }
  
  printf("Digite o valor da constante multiplicadora: ");
  scanf("%i", &multi);

  for(i=1; i<=20; ++i){
    printf("\nO valor de %i vezes %i e: ", numeros[i], multi);
    numeros[i] = (numeros[i] * multi);
    printf("%i", numeros[i]);
  }

  return 0;
}