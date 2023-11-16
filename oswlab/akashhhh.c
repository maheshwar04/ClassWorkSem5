#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *fun(){
    char *input = (char *)malloc(100);
    printf("Enter a name:");
    scanf("%s", input);
    return input;
    }

int main() {
    char *names[] = { "YourName", "FatherName", "MotherName" };
    char *labels[] = { "Your", "Father", "Mother" };

    for (int i = 0; i < 3; i++) {
        char *name_input = fun();

        char *label_copy = (char *)malloc(strlen(labels[i]) + 1);
        strcpy(label_copy, labels[i]);

        printf("%s %s\n", name_input, label_copy);

        free(name_input);
        free(label_copy);
    }
    return 0;
}
int a=5;
int b=10;

int c=a + b



a=5
b=10
