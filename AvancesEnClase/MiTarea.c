#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void counterProcess(char ca, int start, int end, int level);

int main(int argc, char** argv) {
    pid_t p1_pid = getpid();
    
    printf("Main process PID: %d\n", p1_pid);
    
    pid_t p2_pid = fork();
    
    if (p2_pid == 0) {
        // Inside p2 process
        counterProcess('b', 10, 20, 2);
        printf("Child process 2 finished\n");
    } else {
        // Inside p1 process
        wait(NULL);
        printf("Child process 1 finished\n");
    }
    
    return 0;
}

void counterProcess(char ca, int start, int end, int level) {
    pid_t pid = getpid();
    pid_t ppid = getppid();
    
    printf("Child process %d PID: %d, PPID: %d\n", level, pid, ppid);
    
    pid_t p3_pid = fork();
    
    if (p3_pid == 0) {
        // Inside p3 process
        for (int i = start; i <= end; i++) {
            printf("Counter at %d\n", i);
            sleep(1);
        }
        printf("Child process %d finished\n", level);
    } else {
        // Inside p2 process waiting for p3 to finish
        wait(NULL);
    }
}
