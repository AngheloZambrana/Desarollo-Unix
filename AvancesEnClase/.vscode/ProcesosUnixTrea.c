#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int customCounter(char ca, int start, int end);

int main() {
    printf("Proceso principal (p1): PID = %d, PPID = %d\n", getpid(), getppid());
    customCounter('x', 0, 10);
    pid_t hijo = fork();
    if (hijo == 0) {
        pid_t nieto = fork();
        
        if (nieto == 0) {
            printf("Proceso nieto (p3): PID = %d, PPID = %d\n", getpid(), getppid());
            customCounter('n', 20, 40);
        } else {
            int status;
            wait(&status);

            if (WIFEXITED(status)) {
                printf("Proceso hijo (p2): PID = %d, PPID = %d\n", getpid(), getppid());
                customCounter('h', 10, 20);
            }
        }
        exit(EXIT_SUCCESS);
    } else {
        wait(NULL);
    }

    return 0;
}

int customCounter(char ca, int start, int end) {
    for (int i = start; i < end; i++) {
        printf("%c = %d\n", ca, i);
        sleep(1);
    }
    printf("%c terminó su ejecución\n", ca); 
    return 0;
}
