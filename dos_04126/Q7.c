#include <stdio.h>

long countLines(FILE *file) {
    long count = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    return count;
}

long countLinesRecursive(FILE *file) {
    if (file == NULL) {
        return 0;
    }

    long count = countLines(file);
    fseek(file, 0, SEEK_SET);

    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL) {
        fprintf(stderr, "Unable to open file: %s\n", argv[1]);
        return 1;
    }

    long totalLines = countLinesRecursive(file);
    printf("Total lines in %s: %ld\n", argv[1], totalLines);
    fclose(file);
    return 0;
}
