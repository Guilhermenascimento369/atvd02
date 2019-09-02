#include <stdio.h>

int main(void) {
  float max,mot,a,b,c;
  printf("Informe a velocidade máxima da avenida(km/h)\n");
  scanf("%f",&max);
  printf("Informe a velocidade do motorista(km/h)\n");
  scanf("%f",&mot);

  if(mot>max&&mot<max+10){
    printf("O valor da multa foi de 50R$\n");
  }

  if(mot>max+10&&mot<max+30){
    printf("A multa foi de 100R$\n");
    }
    if(mot>max+30){
      printf("A multa foi de 200R$\n");
    }
    if(mot<max){
     printf("O motorista estava dentro do limite de velocidade.\n");
    }


  return 0;
}
