#include <stdio.h>
 
int main(int argc, char *argv[]){

  int numeros[2][3];
 
  printf("Digite os numeros para matriz 2 x 3 \n");
  for(int i=0; i<2; i++){
      for(int j=0; j<3; j++){
        scanf("%i", &numeros[i][j]);
      }
  }
 
  printf("Os numeros digitados na matriz foram: \n");
  for(int i=0; i<2; i++){
      for(int j=0; j<3; j++){
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }
 
  return 0;
}