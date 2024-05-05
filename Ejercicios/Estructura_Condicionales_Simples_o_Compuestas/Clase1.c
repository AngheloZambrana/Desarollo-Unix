#include <stdio.h>

int main() {
    float sueldo;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    if (sueldo > 3000)
    {
        printf("Esta persona debe abonar impuestos \n");
    }
    return 0;   
}