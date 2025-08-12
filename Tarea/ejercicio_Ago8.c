#include <stdio.h>
#include <math.h>

int main(){ 
  float flot[5];
        flot[0]=3.1;
        flot[1]=3.5;
        flot[2]=4.3;
        flot[3]=3.8;
        flot[4]=5.9;
  printf("%f %f %f %f %f\n",flot[0],flot[1],flot[2],flot[3],flot[4]);
  printf("x²= %f %f %f %f %f\n",exp(flot[0]),exp(flot[1]),exp(flot[2]),exp(flot[3]),exp(flot[4]));
  printf("log= %f %f %f %f %f\n",log(flot[0]),log(flot[1]),log(flot[2]),log(flot[3]),log(flot[4]));
  printf("exp(x)+cos(x)= %f %f %f %f %f\n",(exp(flot[0])+cos(flot[0])),(exp(flot[1])+cos(flot[1])),(exp(flot[2])+cos(flot[2])),(exp(flot[3])+cos(flot[3])),(exp(flot[4])+cos(flot[4])));
}