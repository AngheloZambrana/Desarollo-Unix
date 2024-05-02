#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
// se importa para sockets
#include <sys/un.h>
// se importa para addres
#include <unistd.h>
// se importa para la lectura
//#include <netinet.h>
#include <arpa/inet.h>


#define MAX_CONNECTIONS 5
#define MESSAGE_SIZE 2

int main(int argc, char** argv) {

    int server_socket_fd, client_socket_fd;
    
    server_socket_fd = socket(AF_INET, SOCK_STREAM, 0);       
    //*c conecta al soket con un dominio, un tipo de socket y un int XD devolviendo un file descriptor
    
    if(server_socket_fd == -1) {                              
    //* verifica que se ha creado el fd correctamente
        perror("Error UWU");                                  
        // perro-error jajajaja
        return 1;
    }

    char* socket_path = "/tmp/ipc_socket";
    struct sockaddr_in server_addr; 
    // crea estructura para server address

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    server_addr.sin_port = htons(9292);
    
    struct sockaddr_in client_addr;
    int client_addr_size = sizeof(client_addr);
    int bind_status = bind(server_socket_fd, 
         (struct socketaddr *) &server_addr, 
           (socklen_t) &client_addr_size);        
    //*es necesario para usar un socket tipo TCP o tipo unix, etc.(lo bindea) 
    //recibe un fd, una direccion a una estructura del server, y tamaño del socket devolviendo un estado
    
    if(bind_status == -1) {
        perror("Error UWU");   
        // perro-error jajajaja     
        return 2;
    }

    int listen_status = listen(server_socket_fd, MAX_CONNECTIONS);       
    //*escucha,  recibe un fd y un int, el entero es el maximo de conexiones del socket devolviendo un estado
    if(listen_status == -1) {
        perror("le has fallado a esta ciudad");        
        // perro-error jajajaja
        return 3;
    }

    
    
    client_socket_fd = accept(server_socket_fd, (struct sockaddr*)&client_addr, (socklen_t) &client_addr_size);
    //* acepta, recibe un fd, el puntero a la direccion del cliente de una estructura, y el tamaño del cliente

    
    char buffer[MESSAGE_SIZE];
    int read_status = read(client_socket_fd, &buffer, 2);   
    //*lee,recibe un fd del sockete del cliente, el puntero a un buffer y el tamaño del mensaje en chars
    if(read_status == -1) {
        perror("analfabeta momento");        
        // perro-error jajajaja
        return 4;
    }

    printf("Message from cliente sockete: %s\n", buffer);
    int write_status = write(client_socket_fd, "Ok", MESSAGE_SIZE);        
    //*escribe, recibe el fd del sockete del cliente, el mensaje, y el largo del mensaje en caracteres, devuelve un status

    if(write_status == -1) {
        perror("se manquea el teclado");        
        // perro-error jajajaja
        return 5;
    }
    
    close(server_socket_fd);     
    //*c cierra   
    close(client_socket_fd);     

    
    return 0; 
    //*devuelve 0

}
