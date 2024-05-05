#include <stdio.h>

int main() {
    int num1, num2, num3, num4, suma, producto;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);
    printf("Ingrese cuarto valor: ");
    scanf("%i", &num4);
    suma = num1 + num2;
    producto = num3 * num4;
    printf("La suma de los primeros dos valores es: ");
    printf("%i \n", suma);
    printf("El producto de los dos ultimos valores es: ");
    printf("%i \n", producto);

}