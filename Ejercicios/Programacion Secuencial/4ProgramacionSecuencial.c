#include <stdio.h>

int main() {
    int num1, num2, num3, num4, suma;
    float promedio;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);
    printf("Ingrese cuarto valor: ");
    scanf("%i", &num4);
    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4;
    printf("La suma de los cuatro valores es: ");
    printf("%i \n", suma);
    printf("El promedio de los cuatro valores es: ");
    printf("%f \n", promedio);

    
}