#include <stdio.h>
#include <sys/msg.h>
#include <string.h>
#include <unistd.h>

#define MESSAGE_SIZE 128

int main(int argc, char** argv) {
    char buffer[128];
    FILE *ls_command_pipe, *sort_command_pipe;
    char* ls_command = "/usr/bin/ls";
    char* sort_command = "/usr/bin/sort -r";

    ls_command_pipe = popen(ls_command, "r");

    sort_command_pipe = popen(sort_command, "w");

    while(fgets(buffer, 128, ls_command_pipe)) {
        fputs(buffer, sort_command_pipe);
    }

    pclose(ls_command_pipe);
    pclose(sort_command_pipe);


    return 0;
}