#include <stdio.h>
#include <math.h>

float f(float c);

int main(){
  float Err_max=0.0001;
  float a=3,b=5,k,fk,Eapr,Err,kold=INFINITY;
  
  do{
    k=(a+b)/2;
    fk=f(k);
    if (fk*f(a)<0){
          b=k;
   } else{
      a=k;
   }
   Eapr=k-kold;
   Err=fabsf(Eapr/k);
      kold=k;
      printf("raiz:%f \t f(k)=%f \t Eaprx=%f  \t E_r=%f \n",k,fk,Eapr,Err);
  }while(Err>Err_max);
}
float f(float c){
  return (9.81*68.1)/c*(1-exp(-(c/68.1)*10))-40;
}