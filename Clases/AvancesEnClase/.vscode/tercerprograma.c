#include <stdio.h>
#include <sys/msg.h>
#include <string.h>
#include <unistd.h>

#define MESSAGE_SIZE 2048


struct msg_struct {
    long msg_type;
    char msg_content[MESSAGE_SIZE];
};

int main (int argc, char** argv) {
    int msg_queue_id;
    struct msg_struct message;    
    char buffer[256];
    int exit = 0;
    msg_queue_id = msgget((key_t)4789, 0666);
    printf("msg_queue_id: %d\n", msg_queue_id);

    while (exit == 0) {
        printf("esperando rapido \n");
        fgets(buffer, 256, stdin);

        strcpy(message.msg_content, buffer);
        
        if (strncmp(buffer, "exit", 4) == 0) {
            exit = 1;
            
        } else {
            msgsnd(msg_queue_id,(void*) &message, MESSAGE_SIZE, 0);
            printf("mensage xd: %s\n", message.msg_content);
        }

        
        
        
    }
    return 0;
}
