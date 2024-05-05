#include <stdio.h>

int main() {
    int cantidad;
    float total, precio;
    printf("Ingrese la cantidad del prodcto que esta llevando: ");
    scanf("%i", &cantidad);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    total = cantidad * precio;
    printf("El precio total que debe pagar: ");
    printf("%f \n", precio);
    return 0;
}