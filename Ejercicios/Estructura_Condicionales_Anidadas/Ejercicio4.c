#include <stdio.h>

int main() {
    int num1;
    printf("Ingrese valor entero positivo de hasta tres cifras: ");
    scanf("%i", &num1);
    if (num1 < 10)
        printf("El numero es de un digito \n");
        else 
            if (num1 < 100)
                printf("El numero es de dos digitos \n");
                else 
                    if (num1 < 1000)
                        printf("El numero es de tres digitos \n");
                    else
                        printf("Error en la entrada de datos \n");
    return 0;
}