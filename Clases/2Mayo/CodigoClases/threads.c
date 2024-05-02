#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>


// Función que realiza el trabajo en el hilo
void* do_work() {
    // Obtenemos el ID del hilo actual
    pthread_t t_id = pthread_self();
    // Imprimimos un mensaje indicando que el hilo está realizando el trabajo
    printf("Estoy en el hilo [%lu] - haciendo trabajo...\n", t_id);
    // Simulamos trabajo haciendo que el hilo duerma durante 1 segundo
    sleep(1);
    // Imprimimos un mensaje indicando que el hilo ha terminado el trabajo
    printf("Estoy en el hilo [%lu] - ...terminé el trabajo\n", t_id);
}

int main(int argc, char *argv[]) {
    // Definimos el número de hilos a crear
    int threads = 9;
    // Arreglo para almacenar los IDs de los hilos
    pthread_t thread_ids[threads];
    
    // Creamos los hilos
    for(int i = 0; i < threads; i++){
        // Creamos un nuevo hilo y le pasamos la función do_work como rutina
        // NULL indica que no estamos pasando ningún argumento a la función do_work
        int t_status = pthread_create(&thread_ids[i], NULL, do_work, NULL);
        // Verificamos si la creación del hilo fue exitosa
        if(t_status == -1) {
            //perro error jajajaja
            perror("Error al crear el hilo"); // Imprimimos un mensaje de error si la creación falla
            return 1; // Salimos del programa con un código de error
        }
    }
   // Esperamos la finalización de cada hilo
    for(int i = 0; i < threads; i++){
        // Llamamos a pthread_join() para esperar la finalización del hilo con ID thread_ids[i]
        // NULL indica que no estamos interesados en el valor de retorno del hilo
        int join_status = pthread_join(thread_ids[i], NULL);
        // Verificamos si la espera del hilo fue exitosa
        if(join_status == -1) {
            // Imprimimos un mensaje de error si la espera falla
            perror("Error al esperar la finalización del hilo");
            return 2; // Salimos del programa con un código de error
        }
    }

    printf("Fin main(jz salir) \n");
    return 0; // Salimos del programa con éxito
}
