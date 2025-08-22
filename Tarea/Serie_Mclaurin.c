#include <stdio.h>
#include <math.h>

int main()
{
    float x, erroraprox, errorlimite, exponente, valoractual, valoranterior;
    int n = 0;
    printf("Ingrese el valor de x: ");
    scanf("%f",&x);
    printf("Ingrese el error porcentual limite: ");
    scanf("%f",&errorlimite);
    
    do{
        valoranterior = valoractual;
        int factorial = 1;
        for(int f = 1; f<=n; f++){
            factorial *= f;
        }
            exponente = pow(x,n)/factorial;
            valoractual += exponente;
            erroraprox = ((valoractual - valoranterior)/valoractual)*100;
            printf("n=%d, valoractual= %.3f, erroraprox= %.2f\n", n, valoractual, erroraprox);
            n++;
    }while(erroraprox>errorlimite);
    printf("Imprimir resultado: e^%.2f = %.3f\n", x, valoractual);
    
        }