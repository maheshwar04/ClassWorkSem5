#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <semaphore.h>

int main() {
    sem_t sem_p1, sem_p2, sem_p3;

    sem_init(&sem_p1, 0, 1);
    sem_init(&sem_p2, 0, 0);
    sem_init(&sem_p3, 0, 0);

    if (fork() == 0) {
        sem_wait(&sem_p1);
        printf("P1\n");
        sem_post(&sem_p2);
        exit(0);
    }

    if (fork() == 0) {
        sem_wait(&sem_p2);
        printf("P2\n");
        sem_post(&sem_p3);
        exit(0);
    }

    if (fork() == 0) {
        sem_wait(&sem_p3);
        printf("P3\n");
        exit(0);
    }

    for (int i = 0; i < 3; ++i) {
        wait(NULL);
    }

    sem_destroy(&sem_p1);
    sem_destroy(&sem_p2);
    sem_destroy(&sem_p3);

    return 0;
}
