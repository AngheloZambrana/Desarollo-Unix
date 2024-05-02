#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>

int main (int argc, char** argv) { 
    
    pid_t child;
    int fd_pipes[2];

    char message[50] = "El hugo me debe una oreo";
    char read_message[50];


    pipe(fd_pipes);
    child = fork();

    if (child == 0 ) {
        //proceso child
        printf("SOY UN CHILD: %d y vos mi pinche padre: %d\n", getpid(), getppid());

        close(fd_pipes[0]);
        write(fd_pipes[1], message, strlen(message));

        printf("ME MORI MUAJAJAJ: %d pinche padre gil: %d\n", getpid(), getppid());
    } else {
        //proceso main
        printf("YO...SOY...TU PADRE: %d\n", getpid());
        close(fd_pipes[1]);
        read(fd_pipes[0], read_message, sizeof(read_message));
        printf("Padre yo te querria, pero ahora pienso pimche pajer %s", read_message );
        printf("*se suicida por el bien de la trama: %d\n",getpid());
    }

    return 0;
}



