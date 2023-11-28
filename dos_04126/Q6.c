#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename1> <filename2> ... <filenameN>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        FILE *file = fopen(argv[i], "r");

        if (file != NULL) {
            printf("File %s found.\n", argv[i]);
            fclose(file);
        } else {
            printf("File %s not found.\n", argv[i]);
        }
    }

    return 0;
}
