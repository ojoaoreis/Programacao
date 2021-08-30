// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char * argv[]){
  
  // Declaração de variáveis
  int base, altura, area;
  
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "base"
  printf("Digite o tamanho da base do retangulo: ");
  scanf("%i", &base);
  
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "altura"
  printf("Digite o tamanho da altura do retangulo: ");
  scanf("%i", &altura);
 
  // Faz a soma dos valores obtidos acima
  area = base * altura;
  
  // Exibe o resultado final
  printf("A area do retangulo de base %i e altura %i e igual a %i", base, altura, area);
 
  return 0;
}