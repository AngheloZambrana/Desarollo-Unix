#include <stdio.h>
#include <unistd.h>

int contadorGod(int start, int end);

int main(int argc, char** argv) {
    contadorGod(0, 10);
    return 0;
}

int contadorGod(int start, int end) {
    for (int i = start; i < end; i++) {
        printf("i = %d\n", i);
        sleep(1);
    }
}
