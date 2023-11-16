#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <date>\n", argv[0]);
        return 1;
    }
    char *date = argv[1];
    char *token = strtok(date, "-");
    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    int month = 0;
    if (token != NULL) {
        int day = atoi(token);
        token = strtok(NULL, "-");
        if (token != NULL) {
            month = atoi(token) - 1;
            if (month < 0 || month >= 12) {
                printf("Invalid month\n");
                return 1;
            }
            token = strtok(NULL, "-");
            if (token != NULL) {
                int year = atoi(token);
                printf("%s\n", months[month]);
                return 0;
            }
        }
    }
    printf("Invalid date format. Please use the format DD-MM-YYYY.\n");
    return 1;
}



