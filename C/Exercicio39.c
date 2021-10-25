#include <stdio.h>
 
int main(int argc, char *argv[]){

  int numeros[3][4];
  int multi, result;
 
  printf("Digite os numeros para matriz 3 x 4 \n");
  for(int i=0; i<3; i++){
      for(int j=0; j<4; j++){
        scanf("%i", &numeros[i][j]);
      }
  }
  
  printf("Insira uma constante multiplicativa: ");
  scanf("%i", &multi);

for(int i=0; i<3; i++){
      for(int j=0; j<4; j++){
        numeros[i][j] = multi * numeros[i][j];
      }
  }


  printf("Os numeros digitados na matriz e multiplicados foram: \n");
  for(int i=0; i<3; i++){
      for(int j=0; j<4; j++){
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }
 
  return 0;
}