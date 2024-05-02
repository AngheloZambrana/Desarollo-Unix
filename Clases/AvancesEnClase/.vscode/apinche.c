#include <stdio.h>
#include <sys/shm.h>
#include <string.h>
#include <unistd.h>

int main (int argc, char** argv) {
    int shm_id;
    void* shm_ptr;
    char buffer[256];
    
    
    shm_id = shmget((key_t) 4583,(size_t) 2048, 0666 | IPC_CREAT);

    printf("shm id : %d \n", shm_id);

    shm_ptr = shmat(shm_id, NULL, 0);

    read(0, buffer, 256);
    
    strcpy(shm_ptr, buffer);

    printf("Message write to share: %s\n", buffer);
    return 0;
}