#include <stdio.h>

int main(void) {
  float h,pi=3.14,r,a,v,vm,am;
  printf("Informe a altura: (cm)\n");
  scanf("%f",&h);
  printf("Informe o raio(cm):\n");
  scanf("%f",&r);
  a = 2*pi*r*h;
  v = pi*r*r*h;
  am=a/10000;
  vm=v/1000000;

  printf("A �rea do cilindro �:%4.2f cm�\n",a);
  printf("O volume do cilindro �:%4.2f cm�\n",v);
  printf("ou\n");
  printf("%5.2f:m�\n",am);
  printf("%f:m�\n",vm);

  return 0;
}
