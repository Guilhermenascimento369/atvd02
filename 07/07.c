#include <stdio.h>

int main(void) {
  float a,b,c,soma;
  printf("Digite o primeiro número:\n");
  scanf("%f",&a);
  printf("Digite o segundo número:\n");
  scanf("%f",&b);
  printf("Digite o terceiro número:\n");
  scanf("%f",&c);
  soma=b+c;
  if(soma<a){
    printf("O primeiro é maior que a soma dos outros dois.");
  }
    else
    {
 printf("O primeiro NÃO é maior do que a soma dos outros dois.");
    }







  return 0;
}
