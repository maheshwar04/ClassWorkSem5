#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int performComputation(int childNumber) {

    return childNumber * 2;
}

int main() {
    const int numChildren = 3;
    int results[numChildren];
    pid_t pid;

    for (int i = 0; i < numChildren; ++i) {
        pid = vfork();

        if (pid == -1) {

            fprintf(stderr, "Fork failed\n");
            return 1;
        } else if (pid == 0) {

            results[i] = performComputation(i);
            _exit(0); 
        }
    }

    for (int i = 0; i < numChildren; ++i) {
        printf("Result from child %d: %d\n", i, results[i]);
    }

    return 0;
}

