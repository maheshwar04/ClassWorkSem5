#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int numStudents;
    fscanf(file, "%d", &numStudents);

    char name[50];
    int age;
    double marks[100];
    double totalMarks = 0.0;

    for (int i = 0; i < numStudents; i++) {
        fscanf(file, "%s %d", name, &age);
        totalMarks = 0.0;

        for (int j = 0; j < 3; j++) {
            fscanf(file, "%lf", &marks[j]);
            totalMarks += marks[j];
        }

        double averageMarks = totalMarks / 3.0;
        printf("Student: %s, Age: %d, Average Marks: %.2lf\n", name, age, averageMarks);
    }

    fclose(file);

    return 0;
}

