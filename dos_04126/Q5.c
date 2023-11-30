#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define NUM_PHILOSOPHERS 5

pthread_t philosophers[NUM_PHILOSOPHERS];
sem_t forks[NUM_PHILOSOPHERS];

void *philosopher(void *arg) {
    int philosopher_id = *((int *)arg);
    int left_fork = philosopher_id;
    int right_fork = (philosopher_id + 1) % NUM_PHILOSOPHERS;

    while (1) {
        // Think
        printf("Philosopher %d is thinking.\n", philosopher_id);
        sleep(1);

        // Pick up forks
        sem_wait(&forks[left_fork]);
        printf("Philosopher %d picked up left fork %d.\n", philosopher_id, left_fork);
        sem_wait(&forks[right_fork]);
        printf("Philosopher %d picked up right fork %d.\n", philosopher_id, right_fork);

        // Eat
        printf("Philosopher %d is eating.\n", philosopher_id);
        sleep(1);

        // Put down forks
        sem_post(&forks[left_fork]);
        printf("Philosopher %d put down left fork %d.\n", philosopher_id, left_fork);
        sem_post(&forks[right_fork]);
        printf("Philosopher %d put down right fork %d.\n", philosopher_id, right_fork);
    }
}

int main() {
    // Initialize semaphores for each fork
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        sem_init(&forks[i], 0, 1);
    }

    // Create philosopher threads
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        int *philosopher_id = malloc(sizeof(int));
        *philosopher_id = i;
        pthread_create(&philosophers[i], NULL, philosopher, (void *)philosopher_id);
    }

    // Wait for philosopher threads to finish (which will never happen in this case)
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        pthread_join(philosophers[i], NULL);
    }

    // Clean up semaphores
    for (int i = 0; i < NUM_PHILOSOPHERS; ++i) {
        sem_destroy(&forks[i]);
    }

    return 0;
}

