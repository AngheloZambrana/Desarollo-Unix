#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#define MESSAGE_SIZE 128


int main (int argc, char** argv) {

    void* mmap_ptr;
    int fd = open("/tmp/shared_resource", O_RDWR, 0666);
    
    mmap_ptr = mmap(NULL, MESSAGE_SIZE, PROT_WRITE | PROT_READ, MAP_ANON, fd, 0);
    
    /*if (mmap_ptr == -1) {
        perror("perro error\n");
        exit(1);
    }**/
    printf("map: %p\n", mmap_ptr);

    char msg[64];
    memcpy(msg, mmap_ptr, 64);
    printf("msg read: %s\n", msg);

    return 0;
}
    