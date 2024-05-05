#include <stdio.h>

int main() {
    int num1, num2;
    printf("Ingrese primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &num2);
    if(num1 > num2)
    {
        printf("%i \n", num1);
    }
    else
    {
        printf("%i \n", num2);
    }
    return 0;
}