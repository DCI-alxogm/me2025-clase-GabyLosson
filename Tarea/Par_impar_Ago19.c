#include <stdio.h>
#include <math.h>

int main(){
  int numero;
  int residuo=0;
  printf("Ingrese un número:");
  scanf("%d",& numero);
  residuo=numero%2;
  if(residuo!=0){
    printf("Impar");
  }
  else printf("Par");
}