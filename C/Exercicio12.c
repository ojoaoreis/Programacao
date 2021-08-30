#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char * argv[]){
  
  int base, altura, area;
  
  printf("Digite o tamanho da base do retangulo: ");
  scanf("%i", &base);
  
  printf("Digite o tamanho da altura do retangulo: ");
  scanf("%i", &altura);
 
  area = base * altura;
  
  printf("A area do retangulo e %i", area);

  if (area > 100){
      printf(", Terreno grande");
  }
  return 0;
}