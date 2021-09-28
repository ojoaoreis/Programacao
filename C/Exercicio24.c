#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]){
  
  char sexo;
  
  printf("Digite o sexo(F/M): ");
  scanf("%c", &sexo);

  while (sexo != 'F' && sexo != 'M'){
    printf("Erro! Selecionar uma das opcoes de sexo disponiveis (F/M): ");
    scanf("%c", &sexo); 
  }
    
  return 0;
}