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

  printf("A área do cilindro é:%4.2f cm²\n",a);
  printf("O volume do cilindro é:%4.2f cm³\n",v);
  printf("ou\n");
  printf("%5.2f:m²\n",am);
  printf("%f:m³\n",vm);

  return 0;
}
