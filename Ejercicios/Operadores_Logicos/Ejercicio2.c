#include <stdio.h>
//Operador logico and ||
int main() {
    int dd, mm, yy;
    printf("Ingrese el dia: ");
    scanf("%i", &dd);
    printf("Ingrese el mes: ");
    scanf("%i", &mm);
    printf("Ingrese el año: ");
    scanf("%i", &yy);
    if (mm == 1 || mm == 2 || mm == 3)
        printf("Corresponde al primer trimestre \n");
    else
        printf("No corresponde al primer trimestre \n");
    return 0;
}