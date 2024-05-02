#include <stdio.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>

#define MESSAGE_SIZE 128


int main (int argc, char** argv) {
    
    void* mmap_ptr;
    int fd = open("tmp/shared_resource", O_RDWR | O_CREAT , 0666);

    lseek(fd, MESSAGE_SIZE, SEEK_SET);
    wrie(fd, "", 1);
    

    mmap_ptr = mmap(NULL, MESSAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

    printf("mmap: %p\n", mmap_ptr);

    char msg[64] = "Message by mapp";
    memcpy(mmap_ptr, msg, MESSAGE_SIZE);
    printf("Message sent: %d\n", msg);

    
    return 0;
}