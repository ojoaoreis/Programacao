#include<stdio.h>

int main(int argc, char *argv[]){

  int num1=1, num2=1, i, soma;
  
  printf("\nOs primeiros 30 numeros da sequencia de Fibonacci sao: ");
  printf("\n%i %i",num1,num2);

  for(i=2; i<30; ++i){
    soma=num1+num2;    
    printf(" %d",soma);    
    num1=num2;    
    num2=soma;    
  }  
  return 0;  
}