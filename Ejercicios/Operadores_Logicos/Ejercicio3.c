#include <stdio.h>

int main() {
    int dd, mm, yy;
    printf("Ingrese el dia: ");
    scanf("%i", &dd);
    printf("Ingrese el mes: ");
    scanf("%i", &mm);
    printf("Ingrese el año: ");
    scanf("%i", &yy);
    if (dd == 24 && mm == 12 )
        printf("Es navidad \n");
    else
        printf("No es navidad \n");
    return 0;
}