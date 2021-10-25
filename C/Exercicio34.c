#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int numeros[10];
  
  printf("Digite os 10 numeros: ");
  for(int i=0; i<10; i++){
    scanf("%i", &numeros[i]);
  }
  
  for (int i=1; i<10; ++i) {
    if (numeros[0]<numeros[i]){
      numeros[0] = numeros[i];
    }
  }
  
  printf("Dentre os numeros digitados, o maior foi: %i", numeros[0]);
  
  return 0;
}