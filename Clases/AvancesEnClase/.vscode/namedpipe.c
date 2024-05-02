#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

#include <fcntl.h>

int main (int argc, char** argv) {

    int fd;
    
    char* shared_fifo = "/tmp/shared_fifo";

    mkfifo(shared_fifo, 0666);

    fd = open(shared_fifo, O_RDWR);

    pid_t child = fork(); 

    if (child == 0) {
        //child process
        int w_elements[8] = {1,2,3,4,5,6,7,8};
        write(fd, w_elements, sizeof(int) * 8);
    } else {
        //main process
        int r_elements[8];
        read(fd, r_elements, sizeof(int) * 8);
        for(int  i = 0; i < 8; i++) {
            printf("%d", r_elements[i]);
        }
        printf("\n");
        
    }
    return 0;
}