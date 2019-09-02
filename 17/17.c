
#include <stdio.h>
int main()
{
int a,b,c,d,soma;
soma=0;
printf("Digite o primeiro numero:");
scanf("%d",&a);
printf("Digite o segundo numero:");
scanf("%d",&b);
printf("Digite o terceiro numero:");
scanf("%d",&c);
printf("Digite o quarto numero:");
scanf("%d",&d);
if (a % 2 == 0)
soma=soma+a;
if (b % 2 == 0)
soma=soma+b;
if (c % 2 == 0)
soma=soma+c;
if (d % 2 == 0)
soma=soma+d;
printf("Soma dos numeros: %d",soma);
return 0;
}





