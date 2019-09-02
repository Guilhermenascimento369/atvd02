#include <stdio.h>

int main(void) {
  int x,y,resto,div;
  printf("Digite o primeiro numero:\n");
  scanf("%d",&x);
  printf("Digite o segundo número:\n");
  scanf("%d",&y);
  resto=x%y;
  div=x/y;
  printf("resto é:%d\n",resto);
  printf("Quociente é:%d\n",div);


  return 0;
}
