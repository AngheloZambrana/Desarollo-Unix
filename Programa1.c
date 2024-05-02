#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define PIPE_NAME "/tmp/my_pipe"

int main() {
    mkfifo(PIPE_NAME, 0666);

    int pipe_fd = open(PIPE_NAME, O_RDWR);
    if (pipe_fd == -1) {
        perror("No se pudo abrir");
        return 1;
    }

    char message[128];

    while (1) {
        printf("Ingrese un mensaje desde Programa1: ");
        fgets(message, sizeof(message), stdin);
        write(pipe_fd, message, strlen(message) + 1);

        printf("Esperando mensaje de Programa2...\n");
        read(pipe_fd, message, sizeof(message));
        printf("Mensaje recibido desde Programa2: %s", message);
    }

    close(pipe_fd);

    return 0;
}
