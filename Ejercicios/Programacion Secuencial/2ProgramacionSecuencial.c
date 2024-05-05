#include <stdio.h>

int main() {
    int lado, perimetro;
    printf("Ingrese el lado del cuadrado: "); 
    scanf("%i", &lado);
    perimetro = lado * 4;
    printf("El perimetro del cuadrad es: ");
    printf("%i \n", perimetro);
    return 0;
}