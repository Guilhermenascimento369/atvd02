#include <stdio.h>

int main(void) {
  int a,b;
  printf("Digite o primeiro número:\n");
  scanf("%d",&a);
   printf("Digite o segundo número:\n");
  scanf("%d",&b);
  if (a>b){
    printf("%d(Maior).",a);
  }
  if(b>a){
    printf("%d(Maior).",b);
  }
if (a==b){
  printf("Os valores são iguais.\n");
}

  return 0;
}
