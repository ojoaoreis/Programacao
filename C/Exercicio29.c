int main(int argc, char *argv[]){
  int numero, soma, i;
  soma = 0;
  numero = 1;

  while(numero <= 100){
    soma = soma+numero;
    numero = numero+1;
  }

  printf("A soma dos numeros inteiros positivos entre 1 e 100 e: %i", soma);


  return 0;
}