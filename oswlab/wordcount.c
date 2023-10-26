#include <stdio.h>

#include <string.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {

        printf("Usage: %s <paragraph>\n", argv[0]);

        return 1;

    }

    char *paragraph = argv[1];

    int num_lines = 1;  // At least one line even if the input is empty

    int num_words = 0;

    int num_chars = strlen(paragraph);

    for (int i = 0; paragraph[i] != '\0'; i++) {

        if (paragraph[i] == ' ' || paragraph[i] == '\t' || paragraph[i] == '\n') {

            num_words++;

        }

        if (paragraph[i] == '\n') {

            num_lines++;

        }

    }

    printf("Number of lines: %d\n", num_lines);

    printf("Number of words: %d\n", num_words + 1);  // Add 1 for the last word

    printf("Number of characters: %d\n", num_chars);

    return 0;

}
