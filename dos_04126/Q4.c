#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
sem_t mutex, empty, full;

void *producer(void *arg) {
    int item = 1;

    for (int i = 0; i < 10; ++i) {
        sem_wait(&empty);
        sem_wait(&mutex);

        buffer[i % BUFFER_SIZE] = item;
        printf("Produced item %d\n", item++);
        
        sem_post(&mutex);
        sem_post(&full);
    }

    pthread_exit(NULL);
}

void *consumer(void *arg) {
    int item;

    for (int i = 0; i < 10; ++i) {
        sem_wait(&full);
        sem_wait(&mutex);

        item = buffer[i % BUFFER_SIZE];
        printf("Consumed item %d\n", item);
        
        sem_post(&mutex);
        sem_post(&empty);
    }

    pthread_exit(NULL);
}

int main() {
    pthread_t producer_thread, consumer_thread;

    sem_init(&mutex, 0, 1);
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);

    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);

    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);

    sem_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}
