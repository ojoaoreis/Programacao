#include <stdio.h>

int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  float produto1, produto2, produto3, produto4, produto5, pagamento, soma, troco;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto1"
  printf("Digite o valor do primeiro produto: ");
  scanf("%f", &produto1);
  
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto2"
  printf("Digite o valor do segundo produto: ");
  scanf("%f", &produto2);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto3"
  printf("Digite o valor do terceiro produto: ");
  scanf("%f", &produto3);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto4"
  printf("Digite o valor do quarto produto: ");
  scanf("%f", &produto4);

  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "produto5"
  printf("Digite o valor do quinto produto: ");
  scanf("%f", &produto5);
  
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "pagamento"
  printf("Digite o valor do pagamento realizado: ");
  scanf("%f", &pagamento);
  
  soma = produto1+produto2+produto3+produto4+produto5;
  troco = pagamento - soma;

  // Exibe o resultado final
  printf("O valor de troco a receber sera de %.2f reais", troco);
 
  return 0;
}