#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("Digite o primeiro valor (A)\n");
  scanf("%d",&a);
  printf("Digite o segundo valor(B)\n");
  scanf("%d",&b);
  printf("Digite o terceiro valor(C)\n");
  scanf("%d",&c);
  if(a>b&&a>c){
    printf("O maior número é A:(%d) \n",a);
  }
  if(b>a&&b>c){
     printf("O maior número é B: (%d) \n",b);
  }
  if(c>a&&c>b){
     printf("O maior número é C: (%d) \n",c);}

  return 0;
}
