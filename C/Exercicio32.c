#include<stdio.h>

int main(int argc, char *argv[]){

  int qtd, seq, i;
  int soma = 0;

  printf("\nDigite a quantidade de valores da sequencia a serem somados: ");
  scanf("%i", &qtd);
  
  while(qtd <= 0 || qtd > 99){
    printf("\nErro! A quantidade deve ser positiva e menor que 100. Digite uma nova quantidade: ");
    scanf("%i", &qtd);
  }

  for(i=1; i<=qtd; ++i){
    seq = (i*i)+1;
    soma = soma + seq;
  }  
  printf("\nA soma de %i valores da sequencia e: %i", qtd, soma);
  return 0;
}