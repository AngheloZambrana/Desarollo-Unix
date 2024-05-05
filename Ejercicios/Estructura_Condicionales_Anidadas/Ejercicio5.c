#include <stdio.h>

int main() {
    int TotalPreguntas, TotalCorrectas, porcentaje;
    printf("Ingrese la cantidad de preguntas total del examen: ");
    scanf("%i", &TotalPreguntas);
    printf("Ingrese la cantidad de preguntas correctas del examen: ");
    scanf("%i", &TotalCorrectas);
    porcentaje = (TotalCorrectas * 100) / TotalPreguntas;
    if (porcentaje >= 90)
        printf("Nivel Maximo \n");
        else 
            if (porcentaje >= 75)
            printf("Nivel Medio \n");
            else 
                 if (porcentaje >= 50)
                 printf("Nivel Regular \n");
                 else
                    printf("Fuera de nivel \n");
    return 0;
}