#include <stdio.h>

int main() {
    float sueldo, aumento, sueldPag;
    int antiguedad;
    printf("Ingrese sueldo del empleado: ");
    scanf("%f", &sueldo);
    printf("Ingrese la antiguedad en años: ");
    scanf("%i", &antiguedad); 
    if (sueldo < 500 && antiguedad >= 10)
    {
        aumento = sueldo * 0.20;
        sueldPag = sueldo + aumento;
        printf("%f \n", sueldPag);
    }
        
    else 
    {
        if (sueldo < 500)
        {
            aumento = sueldo * 0.05;
            sueldPag = sueldo + aumento;
            printf("%f \n", sueldPag);
        }
        else 
            printf("Sueldo a pagar: ");
            printf("%f \n", sueldo);
    }       
    return 0;
        
}