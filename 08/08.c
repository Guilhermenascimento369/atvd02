#include <stdio.h>

int main(void) {
  int a,b;
  printf("Digite o primeiro n�mero:\n");
  scanf("%d",&a);
   printf("Digite o segundo n�mero:\n");
  scanf("%d",&b);
  if (a>b){
    printf("%d(Maior).",a);
  }
  if(b>a){
    printf("%d(Maior).",b);
  }
if (a==b){
  printf("Os valores s�o iguais.\n");
}

  return 0;
}
