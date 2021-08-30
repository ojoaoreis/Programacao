#include <stdio.h>
 
int main(int argc, char *argv[]){
  int val1, val2, val3;
  
  printf("Digite o primeiro valor: ");
  scanf("%i", &val1);
 
  printf("Digite o segundo valor: ");
  scanf("%i", &val2);

  printf("Digite o terceiro valor: ");
  scanf("%i", &val3);
 
  if (val1 > val2){
      if (val1 > val3){
        printf("O maior valor e o primeiro: %i", val1);
      }
  }

  if (val2 > val1){
      if (val2 > val3){
        printf("O maior valor e o segundo: %i", val2);
      }
  }

  if (val3 > val2){
      if (val3 > val1){
        printf("O maior valor e o terceiro: %i", val3);
      }
  }

  return 0;
}