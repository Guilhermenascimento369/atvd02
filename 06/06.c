#include <stdio.h>

int main(void) {
 float a,b,soma,produto,div;
  printf("Digite um n�mero real:\n");
  scanf("%f",&a);
  printf("Digite mais um n�mero real:\n");
  scanf("%f",&b);
  soma=a+b;
  produto=a*b;
  div=a/b;
  printf("A soma entre eles � %4.2f\n", soma);
  printf("O produto entre eles � %4.2f\n",produto);
  printf("O quociente da divis�o entre eles � %4.2f\n",div);

  return 0;
}
