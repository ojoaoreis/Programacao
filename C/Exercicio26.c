int main(int argc, char *argv[]){
  int numero, r;
 
  printf("Digite um numero para tabuada: ");
  scanf("%i", &numero);
 
  while(numero <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &numero);
  }
 
  for (int i=0; i <= 10; i++){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
  }
 
  return 0;
}