#include <stdio.h>
 
int main(int argc, char *argv[]){
  int val1, val2;
  
  printf("Digite o primeiro valor: ");
  scanf("%i", &val1);
 
  printf("Digite o segundo valor: ");
  scanf("%i", &val2);
 
  if (val1 < val2){
      printf("O menor valor e: %i", val1);
  }
  else if(val2 < val1){
      printf("O menor valor e: %i"), val2;
  }
 
  return 0;
}