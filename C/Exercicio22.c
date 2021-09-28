#include <stdio.h>

int main(int argc, char *argv[]){
  
  int val1;
 
  printf("Digite um valor positivo: ");
  scanf("%i", &val1);
   
  while(val1 <= 0){
      printf("Erro! O valor inserido e negativo. Insira um valor positivo: ");
      scanf("%i", &val1);
  }

  return 0;
}