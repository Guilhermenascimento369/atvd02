#include <stdio.h>

int main(void) {
  float lat,cu,zn;
  printf("Digite a quantidade de lat�o(g)\n");
  scanf("%f",&lat);
  cu=lat*70/100;
  zn=lat*30/100;
  printf("A quantidade de cobre �:%4.2fg\n",cu);
  printf("A quantidade de zinco �:%4.2fg\n",zn);
  return 0;
}
