#include <stdio.h>

int main(void) {
  float x,i,l,total;
  printf("Informe o valor de fábrica do carro (R$)\n");
  scanf("%f",&x);
i=(x*45/100);
l=(x*12/100);
total=x+i+l;
printf("O valor do lucro foi de:%5.3f R$\n",l);
printf("O valor de impostos foi de:%5.3f R$\n",i);
printf("O valor do carro para o consumidor foi de:%5.3f R$\n",total);

  return 0;
}
