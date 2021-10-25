#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int *num;
  int leitura, quant, i, j;

  printf("Digite a quantidade de valores a serem armazenados: ");
  scanf("%i", &quant);
  
  while(quant <=0 || quant > 20){
    printf("Erro! A quantidade de valores dever ser entre 1 e 20. Digite novamente: ");
    scanf("%i", &quant);
  }

  num = (int*)malloc(quant*sizeof(int));

  printf("Digite os valores: ");
  for(int i=0; i<quant; i++){
      scanf("%i", &num[i]);
  }

  printf("Digite um valor definido anteriormente: ");
  scanf("%i", &num[i]);

  for(int j=0; j<=leitura; j++){
    if(j == num[i]){
      printf("O numero digitado esta na posicao: ");
      printf("%i", &num[i]);
    }
  }
  return 0;
}