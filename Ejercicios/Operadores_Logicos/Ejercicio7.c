#include <stdio.h>

int main() {
    int x, y;
    printf("Ingrese primer valor: ");
    scanf("%i", &x);
    printf("Ingrese segundo valor: ");
    scanf("%i", &y);
    if (x > 0 && y > 0)
        printf("Coordenada en el primer cuadrante \n");
        else
           if (x < 0 && y > 0)
            printf("Coordenada en el segundo cuadrante \n"); 
            else
                if (x < 0 && y < 0)
                printf("Coordenada en el tercer cuadrante \n");
                else 
                    if (x > 0 && y < 0)
                    printf("Coordenada en el cuarto cuadrante \n");
                    else
                        printf("La coordenada es 0 y 0 \n");
    return 0;
    
}