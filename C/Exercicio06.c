#include <stdio.h>

int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float cotacao, dolares, reais;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "cotacao"
  printf("Digite o valor da cotacao do dolar: ");
  scanf("%f", &cotacao);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "dolares"
  printf("Digite a quantidade de dolares a ser convertido: ");
  scanf("%f", &dolares);
  
  reais = dolares*cotacao;
 
  // Exibe o resultado final
  printf("O valor de %.2f dolares, sob a cotacao de %.2f, corresponde a %.2f Reais.", dolares, cotacao, reais);
 
  return 0;
}