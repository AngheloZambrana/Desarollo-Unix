//Se nos mostro un diagrama de flujo este es su codigicacion

#include <stdio.h>

int main() {
    int horasTrabajadas;
    float costoHora;
    float sueldo;
    printf("Ingrese las horas trabajadas por el empleado: ");
    scanf("%i", &horasTrabajadas);
    printf("Ingrese el pago por hora: ");
    scanf("%f", &costoHora);
    sueldo = costoHora * horasTrabajadas;
    printf("El sueldo total es: ");
    printf("%f \n", sueldo);
    getchar();
    return 0;
}