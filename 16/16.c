#include <stdio.h>
#include <math.h>

int main(){
float x1, y1, x2, y2, x3, y3,l1,l2,l3,tmp;
printf("Digite P1, x: ");
scanf("%f", &x1);
printf("Digite P1, y: ");
scanf("%f", &y1);

printf("Digite P2, x: ");
scanf("%f", &x2);
printf("Digite P2, y: ");
scanf("%f", &y2);

printf("Digite P3, x: ");
scanf("%f", &x3);
printf("Digite P3, y: ");
scanf("%f", &y3);

l1 = sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
l2 = sqrt( (x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
l3 = sqrt( (x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

//verificando se é possível formar um triângulo com os pontos informados.
  if(l1 < l2){
   tmp=l1; l1=l2; l2=tmp;
  }
  if(l1 < l3){
   tmp=l1; l1=l3; l3=tmp;
  }
  if(l1 < l2 + l3){
   printf("Os pontos formam um triangulo.\n");
  }
  else{
    printf("Os pontos nao formam um triangulo.\n");
  }
  //Condições para cada tipo de triângulo
  //equilatero: todos os lados iguais
  //isoceles:dois lados iguais
  //escaleno:todos os lados diferentes
  if( (l1==l2)&&(l2==l3) ){
    printf("Equilatero\n");
  }
  else if ((l1==l2)||(l2==l3)||
 (l1==l3)){
 printf("Isoceles\n");
  }
  else{
    printf("Escaleno\n");
  }



  return 0;
}
