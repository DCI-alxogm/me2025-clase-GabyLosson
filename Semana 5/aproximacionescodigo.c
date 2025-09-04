#include <stdio.h>
#include <math.h>

int main() {
    float x0 = 0, f0 = 1.2;
    float x1 = 0.5, f1 = 0.925;
    float x2 = 1, f2 = 0.2;
    float d = 0.5, error = -0.9125; 
    float adelante = (f2 - f1) / (x2 - d); 
    float erroradelante = ((error - adelante) / error) * 100;
    float atras = (f1 - f0) / (x1 - x0);    
    float erroratras = ((error - atras) / error) * 100; 
    float centrada = (f2 - f0) / (x2 - x0); 
    float errorcentrado = ((error - centrada) / error) * 100;

    printf("Aproximación hacia adelante: %.2f\n", adelante);
    printf("Error relativo porcentual adelante: %.2f\n", erroradelante);
    printf("Aproximación hacia atras: %.2f\n", atras);
    printf("Error relativo porcentual atras: %.2f\n", erroratras);
    printf("Aproximación centrada: %.2f\n", centrada);
    printf("Error relativo porcentual centrado: %.2f\n", errorcentrado);

}