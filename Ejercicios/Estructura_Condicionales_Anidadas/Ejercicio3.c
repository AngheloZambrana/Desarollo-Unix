#include <stdio.h>

int main() {
    int num1;
    printf("Ingrese valor entero: ");
    scanf("%i", &num1);
    if (num1 == 0)
        printf("El numero es 0 \n");
        if (num1 > 0)
            printf("El numero es posiitivo \n");
        else
            printf("El numero es negativo \n");
    return 0;
}