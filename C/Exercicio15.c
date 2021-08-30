#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  float peso, altura, imc;
  
  printf("Digite o peso: ");
  scanf("%f", &peso);
 
  printf("Digite a altura: ");
  scanf("%f", &altura);
 
  imc = peso / (altura*altura);
 
  if(imc < 20){
      printf("Abaixo do peso!");
  }
  else if(imc < 25){
      printf("Peso ideal");
  }
  else{
      printf("Acima do peso");
  }
  return 0;
}