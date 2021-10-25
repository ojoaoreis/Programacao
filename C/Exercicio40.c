#include <stdio.h>
 
int main(int argc, char *argv[]){
  int **numeros;
  int linhas;
  int colunas;
 
  printf("Digite a quantidade de linhas: ");
  scanf("%i", &linhas);

  while (linhas > 10){
    printf("Erro! O valor maximo de linhas e 10. Entre com um novo valor: ");
    scanf("%i", &linhas);
  }
 
  printf("Digite a quantidade de colunas: ");
  scanf("%i", &colunas);
 
  while (linhas > 10){
    printf("Erro! O valor maximo de colunas e 10. Entre com um novo valor: ");
    scanf("%i", &colunas);
  }

  numeros = (int**)malloc(linhas*sizeof(int));
 
  for(int i=0; i<linhas; i++){
      numeros[i] = (int*)malloc(colunas*sizeof(int));
  }
 
  printf("Digite os numeros para matriz %i x %i \n", linhas, colunas);
  for(int i=0; i<linhas; i++){
      for(int j=0; j<colunas; j++){
        scanf("%i", &numeros[i][j]);
      }
  }
 
  printf("Os numeros digitados na matriz foram: \n");
  for(int i=0; i<linhas; i++){
      for(int j=0; j<colunas; j++){
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }



  
 
  return 0;
}