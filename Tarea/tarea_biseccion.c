#include <stdio.h>
#include <math.h>

float f(float x){
    return sin(10*x) - cos(3*x);
}

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
      printf("raiz:%f\t f(k)=%f\t Eaprox=%f\t E_rel=%f \n",k,fk,Eapr,Err);
  }while(Err>Err_max);

printf("Raiz final aproximada: %f con error relativo < %f\n", k, Err_max);

}