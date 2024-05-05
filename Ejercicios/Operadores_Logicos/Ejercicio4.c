#include <stdio.h>

int main() {
    int num1, num2, num3, operacion;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);
    operacion = (num1 + num2) * num3;
    if (num1 == num2 && num2 == num3)
        printf("%i \n", operacion);
    else
        printf("Los numeros no son iguales \n");
       
    return 0;
}