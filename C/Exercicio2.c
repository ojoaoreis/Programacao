// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char * argv[]){
  
  // Declaração de variáveis
  int aresta, area;
  
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "base"
  printf("Digite o tamanho da aresta do quadrado: ");
  scanf("%i", &aresta);
  
  // Faz a soma dos valores obtidos acima
  area = aresta*aresta;
  
  // Exibe o resultado final
  printf("A area do quadrado de aresta %i e igual a %i", aresta, area);
 
  return 0;
}