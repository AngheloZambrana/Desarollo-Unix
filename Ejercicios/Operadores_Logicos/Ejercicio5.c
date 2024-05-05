#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);
    if (num1 < 10 && num2 < 10 && num3 < 10)
        printf("Todos los numeos son menores a 10 \n");
    else
        printf("No todos los numeros son menores a 10 \n");
    return 0;
}