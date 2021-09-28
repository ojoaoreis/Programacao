int main(int argc, char *argv[]){
  int numero, tab, i, multi, j;
  numero = 1;

  for(j=1; j<=20; j++){ 
    for (i=1; i<=10; i++){
        tab = numero*i;
        printf("%i x %i = %i\n", numero, i, tab);
    }
  numero = numero+1;
  if(j == 20){
      break;
  }
  printf("Para iniciar a proxima tabuada digite Enter\n");
  scanf("%c");
  continue;
  }
  return 0;
}