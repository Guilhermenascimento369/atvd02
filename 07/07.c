#include <stdio.h>

int main(void) {
  float a,b,c,soma;
  printf("Digite o primeiro n�mero:\n");
  scanf("%f",&a);
  printf("Digite o segundo n�mero:\n");
  scanf("%f",&b);
  printf("Digite o terceiro n�mero:\n");
  scanf("%f",&c);
  soma=b+c;
  if(soma<a){
    printf("O primeiro � maior que a soma dos outros dois.");
  }
    else
    {
 printf("O primeiro N�O � maior do que a soma dos outros dois.");
    }







  return 0;
}
