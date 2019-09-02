#include <stdio.h>

int main(void) {
  int a,b,c,maior,medio,menor;
  printf("Digite o primeiro valor (A)\n");
  scanf("%d",&a);
  printf("Digite o segundo valor(B)\n");
  scanf("%d",&b);
  printf("Digite o terceiro valor(C)\n");
  scanf("%d",&c);
   if(a>b&&a>c){
    maior=a;
    if(b>c){
      medio=b;
      menor=c;
    }
    if(c>b){
      medio=c;
      menor=b;
    }
  }
  if(b>a&&b>c){
    maior=b;
    if(a>c){
      medio=a;
      menor=c;
    }
    if(c>a){
      medio=c;
      menor=a;
    }
  }
  if(c>a&&c>b){
    maior=c;
    if(a>b){
      medio=a;
      menor=b;
    }
    if(b>a){
      medio=b;
      menor=a;
    }
  }
  printf("A ordem crescente obtida foi: %d, %d, %d.", menor, medio, maior);

  return 0;
}
