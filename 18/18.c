#include <stdio.h>
int main(void) {
  int ano;
  printf("Digite o ano desejado: ");
  scanf("%d", &ano);
  if(ano%400 == 0 ||(ano % 4 == 0 && ano % 100!= 0)){
    printf("Esse ano e bissexto.");
  }
  else{
    printf("Esse ano nao e bissexto.");
  }
  return 0;
}
