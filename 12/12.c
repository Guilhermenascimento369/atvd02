#include <stdio.h>

int main(void) {
  int a,b,div;
  printf("Digite um n�mero inteiro:\n");
  scanf("%d",&a);
  printf("Digite mais um n�mero inteiro:\n");
   scanf("%d",&b);
   if(b ==0){
     printf("DIVIS�O POR 0");
   }
   else{
     div=a/b;
     printf("O quociente da divis�o foi: %d\n",div);

   }


  return 0;
}
