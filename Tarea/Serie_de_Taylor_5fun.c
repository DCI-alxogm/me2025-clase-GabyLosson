#include <stdio.h>
#include <math.h>

int main()
{
    int opcion, n=0;
    double x, epsilon, suma=0, termino=0, fact, error;
    
    printf("Elige una función:\n");
    printf("1. e^x\n");
    printf("2. sen(x)\n");
    printf("3. cos(x)\n");
    printf("4. ln(1+x)\n");
    printf("5. 1/(1-x)\n");
    scanf("%d", &opcion);
    
    printf("Ingresa el valor de x: \n");
    scanf("%lf", &x);
    printf("Ingresa el valor de epsilon: \n");
    scanf("%lf", &epsilon);
    
    switch(opcion){
        case 1:
        do{
            fact = 1;
            for(int i = 1; i <= n; i++)
            fact *= i;
            termino = pow(x,n)/fact;
            suma += termino;
            n++;
        }while(termino>epsilon);
        printf("Aproximacion de e^x: %lf\n", suma);
        printf("Valor real: %lf\n", exp(x));
        error = exp(x) - suma;
        printf("Error: %lf\n", error);
        break;
            
        case 2: 
        do{
            fact = 1;
            for(int i = 1; i <= 2*n+1; i++)
            fact *= i;
            termino = pow(-1,n) * pow(x,2*n+1)/fact;
            suma += termino;
            n++;
        }while(termino>epsilon);
        printf("Aproximaqción de sen(x): %lf\n", suma);
        printf("Valor real: %lf\n", sin(x));
        error = sin(x) - suma;
        printf("Error: %lf\n", error);
        break;
            
        case 3:
       do{
           fact = 1;
           for(int i = 1; i <= 2*n; i++)
           fact *= i;
           termino = pow(-1,n) * pow(x,2*n)/fact;
           suma += termino;
           n++;
        }while(termino>epsilon);
        printf("Aproximación cos(x): %lf\n", suma);
        printf("Valor real: %lf\n", cos(x));
        error = cos(x) - suma;
        printf("Error: %lf\n", error);
        break;
            
        case 4:
        if(x<=-1){
            printf("Error: ln(1+x) no se puede calcular para x<=-1");
            return 1;
        }
        n=1;
        do{
            fact = 1;
            for(int i = 1; i <= n; i++)
            fact *= i;
            termino = pow(-1,n) * pow(x,n)/fact;
            suma += termino;
            n++;
        }while(termino>epsilon);
        printf("Aproximación ln(1+x): %lf\n", suma);
        printf("Valor real: %lf\n",log(1+x));
        error = (log(1-x)) - suma;
        printf("Error: %lf\n", error);
        break;
            
        case 5: 
        if(x>=1){
            printf("Error no se puede calcular para x mayor o igual a 1");
            return 1;
            }
        do{
            fact = 1;
            for(int i = 1; i <= n; i++)
            fact *= i;
            termino = pow(x,n)/fact;
            suma += termino;
            n++;
        }while(termino>epsilon);
        printf("Aproximación 1/(1-x): %lf\n", suma);
        printf("Valor real: %lf\n", 1/(1-x));
        error = (1/(1-x)) - suma;
        printf("Error: %lf\n", error);
        break;
            
    default:
        printf("No se puede calcular");
        return 1; 
    }
    printf("Valor de n: %d\n", n);
    
}
