#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
  float aceleracao, velocidadeinicial, tempo, velocidade;
  
  printf("Digite o valor da aceleracao: ");
  scanf("%f", &aceleracao);
 
  printf("Digite o valor da velocidade inicial: ");
  scanf("%f", &velocidadeinicial);

  printf("Digite o valor do tempo de percurso: ");
  scanf("%f", &tempo);
  
  velocidade = velocidadeinicial + (aceleracao*tempo);
  printf ("A velocidade final do automovel e %.2f", velocidade);
  
  if (velocidade <= 40){
    printf(", Veiculo muito lento");
  }
  else if (velocidade <= 60){
    printf (", Velocidade permitida");
  }
  else if (velocidade <= 80){
    printf (", Velocidade de cruzeiro");
  }
  else if (velocidade <= 120){
    printf (", Veiculo rapido");
  }
  else if (velocidade > 120){
    printf (", Veiculo muito rapido");
  }

  return 0;
}