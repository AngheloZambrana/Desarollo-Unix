#include <stdio.h>

int main() {
    int num1, num2, suma, resta, multiplicacion;
    float division;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    if(num1 > num2)
    {
        suma = num1 + num2;
        resta = num1 - num2;
        printf("La suma de los dos valores es: ");
        printf("%i \n", suma);
        printf("La diferencia de los dos valores es: ");
        printf("%i \n", resta);
    }
    else
    {
        multiplicacion = num2 * num1;
        division = num2 / num1;
        printf("La multiplicacion de los dos valores es: ");
        printf("%i \n", multiplicacion);
        printf("La division de los dos valores es: ");
        printf("%f \n", division);
    }
    return 0;
}