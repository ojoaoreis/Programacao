#include<stdio.h>

int main(int argc, char *argv[]){

  int num1=1, num2=1, num3=1, i, soma;
  
  printf("\nOs primeiros 20 numeros da sequencia de Bergamaschi sao: ");
  printf("\n%i %i %i",num1,num2, num3);

  for(i=3; i<20; ++i){
    soma=num1+num2+num3;    
    printf(" %d",soma);    
    num1=num2;
    num2=num3;
    num3=soma;
  }  
  return 0;
}