# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>

struct parametros {
    int id;
    float escalar;
    float matriz[3][3];
};

void init(float m[3][3]) {
    int i;
    int j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            m[i][j] = rand() % 100;
        }
    }
}

void *matrizporescalar(void *arg) {
    struct parametros *p;
    int i;
    int j;
    p = (struct parametros *)arg;
    for (i = 0; i < 3; i++) {
        printf("Hilo %d multiplicando fila %d\n", p->id, i);
        for (j = 0; j < 3; j++) {
            p->matriz[i][j] = p->matriz[i][j] * p->escalar;
            usleep(100000);
        }
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t h1;
    pthread_t h2;
    struct parametros p1;
    struct parametros p2;
    p1.id = 1;
    p1.escalar = 5.0;
    init(p1.matriz);
    p2.id = 2;
    p2.escalar = 10.0;
    init(p2.matriz);
    pthread_create(&h1, NULL, matrizporescalar, (void *)&p1);
    pthread_create(&h2, NULL, matrizporescalar, (void *)&p2);
    pthread_join(h1, NULL);
    pthread_join(h2, NULL);
    printf("Fin\n");
    return 0;
}
