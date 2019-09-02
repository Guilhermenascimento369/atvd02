#include <stdio.h>

int main() {
  float m1,m2,m3,sopa;

  printf("Digite a nota da unidade 1: \n");
  scanf("%f",&m1);
  printf("Digite a nota da unidade 2: \n");
  scanf("%f",&m2);
  printf("Digite a nota da unidade 3: \n");
  scanf("%f",&m3);

  sopa = (m1+m2+m3)/3;

  printf("(%5.2f+%5.2f+%5.2f)/3=%4.2f\n",
 m1,m2,m3,sopa);
 if(sopa >=5.0 ){
 printf("Passou meu consagrado \n");
 }
 else {
  printf("Você fará a reposição\n");
 }

  return 0;
}
