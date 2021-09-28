#include <stdio.h>

int main(int argc, char *argv[]){
  
  int val1, val2;
 
  printf("Digite o primeiro valor: ");
  scanf("%i", &val1);

  printf("Digite o segundo valor: ");
  scanf("%i", &val2);
   
  while(val1 >= val2){
      printf("Erro! O segundo valor deve ser maior que o primeiro. Insira um novo valor: ");
      scanf("%i", &val2);
  }

  return 0;
}