//Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
//Função principal do programa
int main(int argc, char * argv[]){
  
  //Declaração de variáveis
  int media, val1, val2, val3, val4;
  
  //Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "val1"
  printf("Digite o primeiro valor: ");
  scanf("%i", &val1);
  
  //Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "val2"
  printf("Digite o segundo valor: ");
  scanf("%i", &val2);

  //Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "val3"
  printf("Digite o terceiro valor: ");
  scanf("%i", &val3);

  //Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "val4"
  printf("Digite o quarto valor: ");
  scanf("%i", &val4);
  
  //Faz a media dos valores obtidos
  media = (val1+val2+val3+val4)/4;
  
  //Exibe o resultado final
  printf("A media aritmetica dos 4 valores e igual a %i", media);
 
  return 0;
}