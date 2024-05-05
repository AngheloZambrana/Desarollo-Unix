#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese tercer valor: ");
    scanf("%i", &num3);
    if (num1 > num2)  
        if (num1 > num3)
            printf("El numero mayor es el primero \n");
        else
            printf("El numero mayor es el tercero \n");

    else
        if (num2 > num3)
            printf("El numero mayor es el segundo \n");
        else
            printf("El numero mayor es el tercero \n");

    return 0;
}