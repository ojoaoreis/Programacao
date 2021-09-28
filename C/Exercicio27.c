int main(int argc, char *argv[]){
  int numero, r, inter1, inter2;
 
  printf("Digite um numero para a tabuada: ");
  scanf("%i", &numero);
 
  while(numero <= 0){
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &numero);
  }

  printf("Digite o intervalo da tabuada a ser calculada:\n");
  printf("Digite o primeiro valor do intervalo: ");
  scanf("%i", &inter1);
  printf("Digite o segundo valor do intervalo: ");
  scanf("%i", &inter2);
  while(inter1 >= inter2){
      printf("Erro! O segundo valor deve ser maior que o primeiro. Insira um novo valor: ");
      scanf("%i", &inter2);
  }

  for (int i=inter2; i >= inter1; i--){
    r = numero * i;
    printf("%i x %i = %i\n", numero, i, r);
  }
 
  return 0;
}