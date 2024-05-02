#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main (int argc, char** argv) {

    char* f_open = "18abril.c";
    
    int fd= open(f_open, O_RDONLY);
    printf("fd = %d\n", fd);

    char content[2000];
    int size_read = read(fd, content, 2000);
    //printf("content: %s\n", content);
    printf("size read: %d\n", size_read);
    char* mod = {'P','I','N','C','H','E',' ', 'A', 'N', 'G', 'H', 'E', 'L', 'O'};

    int size_write = write(fd, mod, 14);
    printf("size writen: %d\n", size_write);

    int fd_write = open("write-me.txt", 
        O_WRONLY | O_CREAT, 0666);
    size_write = write(fd_write, mod, 3);
    printf("fd_write = %d \n ", fd_write);
    char content2[2];
    int size_read2 = read(fd_write, content2, 2);
    printf("size read: %d\n", size_read2);


    

    return 0;
}