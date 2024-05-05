#include <stdio.h>

int main() {
    int num1, num2, num3;
    float promedio;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);
    promedio = (num1 + num2 + num3) / 3;
    if (promedio >= 7)
        printf("Promocionado \n");
        if (promedio >= 4)
            printf("Regular \n");
        else
            printf("Reprobado \n");
    return 0;
}