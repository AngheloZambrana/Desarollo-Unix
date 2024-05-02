#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
// se importa para sockets
#include <sys/un.h>
// se importa para addres
#include <unistd.h>
// se importa para la lectura


#define MAX_CONNECTIONS 5
#define MESSAGE_SIZE 256

int main(int argc, char** argv) {

    int server_socket_fd;
    char* socket_path = "/tmp/ipc_socket";

    int unlink_status = unlink(socket_path);
    //desvincula epicamente
    if(unlink_status == -1) {
        perror("pinche josu");        
        // perro-error jajajaja
        return 10;
    }

    server_socket_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if(server_socket_fd == -1) {
        perror("pinche anghelo");        
        // perro-error jajajaja
        return 1;
    }

    struct sockaddr_un server_socket_addr;
    server_socket_addr.sun_family = AF_UNIX;
    strcpy(server_socket_addr.sun_path, socket_path);
    int connection_status = connect(server_socket_fd, (struct sockaddr*) &server_socket_addr, sizeof(server_socket_addr));
    if(connection_status == -1) {
        perror("pinche jheremy");        
        // perro-error jajajaja
        return 2;
    }

    int write_status = write(server_socket_fd, "ji", 2);
    if(write_status == -1) {
        perror("pinche anghelo");        
        // perro-error jajajaja
        return 3;
    }
    
    char* response[2];
    int read_status = read(server_socket_fd, response, 2);
    if(read_status == -1) {
        perror("pinche lucho");        
        // perro-error jajajaja
        return 4;
    }
    printf("lo que lei es: %S\n", response);


    close(server_socket_fd);



    return 0;
}