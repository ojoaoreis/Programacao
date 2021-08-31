#include <stdio.h>
 
int main(int argc, char *argv[]){
  int val1, val2, val3;
  
  printf("Digite o primeiro valor: ");
  scanf("%i", &val1);
 
  printf("Digite o segundo valor: ");
  scanf("%i", &val2);

  printf("Digite o terceiro valor: ");
  scanf("%i", &val3);
 
  if((val1+val2>val3)||(val1+val3>val2)||(val2+val3>val1)){
      if (val1 == val2 && val2 == val3){
          printf("Este e um triangulo equilatero");
      }
      if((val1 == val2 && val2 != val3)||(val1 == val3 && val1 != val2)||(val3 == val2 && val2 != val1)){
          printf("Este e um triangulo isoceles");
      }
      if (val1 != val2 && val2 != val3 && val1 != val3){
          printf("Este e um triangulo escaleno");
      }
  }
  return 0;
}