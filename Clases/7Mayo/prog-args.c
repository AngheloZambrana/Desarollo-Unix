#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//puerto obligatorio
int main(int argc, char** argv) {
    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++){
        printf("argv:%s\n", argv[i]);
    }
    
    if (argc != 3) {
        printf("Invalid number of arguments \n");
        printf("Usage:\n\t./osspace -p <port>\n");
        return 1;
    }

    //Verificar que sea un '-p' para el puerto
    if (strcmp(argv[1], "-p") != 0) {
        printf("ponga: '-p puerto', no sea como anghelo...no sea pinche\n");
        printf("unknown arg: %s\n", argv[1]);
        return 1;
    }

    //Verificar el numero de puerto y convertir de str a int
    int port = atoi(argv[2]);//atoi convierte todos los numeros antes de un caracter a int, en caso de solo tener caracteres devuelve 0
    if (port == 0){
        printf("invalid port: %s\n", argv[2]);
        return 1;
    }
    else if (port < 1000) {
        printf("Invalit port tiene que ser mayor a 1000 \n");
    }
    else {
        printf(" Corriendo en puertation %d\n", port);
        printf("todo seda mi rey, fiera, maquina, tifon,nro 1, bestia parda grizzly\n");
        //seda
    }

    
    
    return 0;
}
