#include <stdio.h>

int main() {
    int num1;
    printf("Ingrese un valor entre 1-99: ");
    scanf("%i", &num1);
    if (num1 >= 10)
        printf("El numero tiene 2 digitos \n");
    else    
        printf("El valor es de 1 digito \n");
}

