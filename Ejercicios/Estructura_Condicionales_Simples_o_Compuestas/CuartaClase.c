#include <stdio.h>

int main() {
    int num1, num2, num3, suma;
    float promedio;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);
    suma = num1 + num2 + num3 ;
    promedio = suma / 3;
    if (promedio >= 7)
        printf("Promocionado \n");    
}