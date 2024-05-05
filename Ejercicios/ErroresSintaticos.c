#include<stdio.h>

int main() {
    int lado;
    int superficie;
    printf("Ingrese el valor del lado de su cuadrado: ");
    scanf("%i", &lado);
    superficie = lado * lado;
    printf("La superficie del cuadrado es: ");
    printf("%i \n", superficie);

}