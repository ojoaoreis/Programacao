#include <stdio.h>

int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float altura, peso, imc;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto1"
  printf("Digite o valor da altura em metros: ");
  scanf("%f", &altura);
  
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto2"
  printf("Digite o valor do peso: ");
  scanf("%f", &peso);
  
  imc = peso/(altura*altura);
  
  // Exibe o resultado final
  printf("O valor do IMC e de %.2f", imc);
 
  return 0;
}