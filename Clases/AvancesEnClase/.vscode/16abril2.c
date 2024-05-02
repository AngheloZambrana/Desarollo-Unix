#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
    pid_t main_pid = getpid();
    pid_t p_main = getppid();
    printf("main_pid: %d\n", main_pid);
    printf("p_main_pid: %d\n", p_main);
    
    pid_t child = fork();
    if (child == 0) {
        //Proceso hijo
        printf("child pid = %d, ppid = %d\n", getpid(),getppid());
        sleep(5);
        printf("child finish\n" );
    }else {
        //Proceso padre
        printf("main pid = %d, ppid = %d\n", getpid(),getppid());    
        wait(NULL);
        printf("main finish \n");
    }
    
    return 0;
}

