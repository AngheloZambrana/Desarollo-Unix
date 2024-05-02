#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

void sigkill_handler() {
  printf("SIGKILL handling\n");
}

void sigstop_handler() {
  printf("SIGSTOP handling\n");
}

void sigcont_handler() {
  printf("SIGCONT handling\n");
}

void sigint_handler() {
  printf("control c detected\n");
  exit(0);
}

int main(int argc, char** argv) {

    signal(SIGINT, &sigint_handler);
    int child_pid = fork();

    if (child_pid == 0) {
    // Child process
    signal(SIGKILL, &sigkill_handler);
    signal(SIGSTOP, &sigstop_handler);
    signal(SIGCONT, &sigcont_handler);
    int counter = 0;
    while(1) {
        printf("Child counter %d\n", counter++);
        sleep(1);
    }
    } else {
    // Parent process
    sleep(5);
    kill(child_pid, SIGSTOP);
    sleep(5);
    kill(child_pid, SIGCONT);
    sleep(5);
    kill(child_pid, SIGKILL);
    printf("Child process killed\n");
    wait(NULL);
    }

    return 0;
}

//Hugo!!! Como haces correr lo del Control C??

//Pinche Anghelo
//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo


//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo

//Pinche Anghelo
