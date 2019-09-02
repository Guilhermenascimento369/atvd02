#include <stdio.h>
#include <math.h>

int main(void) {
  int a,b,c,dta;
  float r1,r2;

  printf("Digite o valor do coeficiente A: ");
  scanf("%d", &a);
  printf("Digite o valor do coeficiente B: ");
  scanf("%d", &b);
  printf("Digite o valor do coeficiente C: ");
  scanf("%d", &c);

  dta = b*b-(4*a*c);
  if(dta<0){

    printf("O valor de delta e igual a %d.\n", dta);
    printf("para delta negativo não há resultado.");
  }
  else{
    r1 = (-b + sqrt(dta))/(2*a);
    r2 = (-b - sqrt(dta))/(2*a);

    printf("O resultado foi:\n Raiz 1=%3.1f\n Raiz 2 =%3.1f\n", r1, r2);
  }
  return 0;
}
