#include <stdio.h>

int main(void) {
  int a,b,div;
  printf("Digite um número inteiro:\n");
  scanf("%d",&a);
  printf("Digite mais um número inteiro:\n");
   scanf("%d",&b);
   if(b ==0){
     printf("DIVISÃO POR 0");
   }
   else{
     div=a/b;
     printf("O quociente da divisão foi: %d\n",div);

   }


  return 0;
}
