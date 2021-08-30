#include <stdio.h>

int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float celsius, conversao;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "celsius"
  printf("Digite o valor em graus Celsius: ");
  scanf("%f", &celsius);
 
  // Faz a conversao de celsius para fahrenheit
  conversao = (celsius*1.8)+32;
 
  // Exibe o resultado final
  printf("O valor de %.1fC em Fahrenheit e %.1fF", celsius, conversao);
 
  return 0;
}