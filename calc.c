#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
sleep(10);
if (argc != 4) {
fprintf(stderr, "Usage: %s <operation: add/multiply> <num1> <num2>\n", argv[0]);
return 1;
}
char *operation = argv[1];
int num1 = atoi(argv[2]);
int num2 = atoi(argv[3]);
if (strcmp(operation, "add") == 0) {
sleep(15);
execl("./r", "r", argv[2], argv[3], NULL);
} else if (strcmp(operation, "multiply") == 0) {
execl("./mul", "mul", argv[2], argv[3], NULL);
} else {
fprintf(stderr, "Invalid operation. Use 'add' or 'multiply'.\n");
return 1;
}
return 0;
}
