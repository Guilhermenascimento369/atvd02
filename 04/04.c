#include <stdio.h>

int main(void) {
  int x,y,resto,div;
  printf("Digite o primeiro numero:\n");
  scanf("%d",&x);
  printf("Digite o segundo n�mero:\n");
  scanf("%d",&y);
  resto=x%y;
  div=x/y;
  printf("resto �:%d\n",resto);
  printf("Quociente �:%d\n",div);


  return 0;
}
