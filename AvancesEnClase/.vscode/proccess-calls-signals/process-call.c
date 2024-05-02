#include <stdio.h>
#include <sys/msg.h>
#include <string.h>
#include <unistd.h>

#define MESSAGE_SIZE 128

int main(int argc, char** argv) {
    char* sort = "/usr/bin/sort";
    FILE* sort_pipe;
    char* chars[7] = {"pincho", "", "anabolico", "diabolico", "armonioso", "majete", "detergente"};

    for (int i = 0; i < 7; i++) {
        printf("%s\n", chars[i]);
    }
    sort_pipe = popen(sort, "w");

    for (int i = 0; i < 7; i++) {
        fputs(chars[i], sort_pipe);
        fputc('\n',sort_pipe);
    }


    pclose(sort_pipe);
    return 0;



}
