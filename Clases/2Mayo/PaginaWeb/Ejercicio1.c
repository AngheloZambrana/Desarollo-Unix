// Escribe el programa anterior y comprueba su funcionamiento.

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>

void *hola(void *arg) {
    char *msg = "pnhageo";
    int i;

    for (i = 0; i < strlen(msg); i++) {
        printf("%c", msg[i]);
        fflush(stdout);
        usleep(1000);
    }

    return NULL;
}

void *mundo(void *arg) {
    char *msg = "icenhl";
    int i;
    for (i = 0; i < strlen(msg); i++) {
        printf("%c", msg[i]);
        fflush(stdout);
        usleep(1000);
    }

    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t h1;
    pthread_t h2;
    pthread_create(&h1, NULL, hola, NULL);
    pthread_create(&h2, NULL, mundo, NULL);
    pthread_join(h1, NULL);
    pthread_join(h2, NULL);
    printf("Fin \n");
    return 0;
}

// Ejemplo de creacin de hilos en c

