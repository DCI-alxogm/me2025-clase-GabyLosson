#include <stdio.h>
#include <math.h>

int main(){
  int a=3, b=4, c=5, d=7;
  int e;

  printf("e= %d\n",(a+b)*c/d);
  printf("e= %d\n",((a+b)*c)/d);
  printf("e= %d\n",a+b*c/d);
  printf("e= %d\n",a+(b*c)/d);
}