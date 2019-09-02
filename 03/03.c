#include <stdio.h>

int main() {
  float an,cig,pco,total;
  printf("Ha quantos anos ele fuma?:\n");
  scanf("%f",&an);
  printf("Quantos cigarros por dia?:\n");
  scanf("%f",&cig);
  printf("Qual o preço de uma carteira?:\n");
  scanf("%f",&pco);
  total = ((cig*365*an*pco)/20);
 printf("%4.2f reais gastos com remedio pro pulmão",total);


  return 0;
}
