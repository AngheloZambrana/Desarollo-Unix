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


    int msg_queue_id = msgget((key_t) 4789, 0666 | IPC_CREAT);
    struct msg_struct message;
    
    printf("msg_queue_id: %d\n", msg_queue_id);

    message.msg_content[0] = 'M';
    msgsnd(msg_queue_id, (void*)&message, MESSAGE_SIZE, 0);
    printf("Message: %s\n", message.msg_content);    
    return 0;
}