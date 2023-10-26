#include <stdio.h>

int calculateAge(int birthyear) {
    int currentyear = 2023;
    return currentyear - birthyear;
}

int p_cal(const char *dob) {
    int birthyear, birthmonth, birthday;
    sscanf(dob, "%2d-%2d-%4d", &birthday, &birthmonth, &birthyear);

    int age = calculateAge(birthyear);

    if (age < 30) {
        return 10000;
    } else if (age > 50) {
        return 30000;
    } else {
        return 20000;
    }
}

int main() {
    char dob[11];
    printf("Enter your date of birth (dd-mm-yyyy): ");
    scanf("%s", dob);

    char *months[] = {
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December"
    };

    int birthyear, birthmonth, birthday;
    sscanf(dob, "%2d-%2d-%4d", &birthday, &birthmonth, &birthyear);

    int age = calculateAge(birthyear);

    printf("Your birth day is on %d-%s-%d\n", birthday, months[birthmonth - 1], birthyear);
    printf("Your age is: %d years\n", age);

    int premium = p_cal(dob);
    printf("Premium to be paid: %d\n", premium);

    return 0;
}

