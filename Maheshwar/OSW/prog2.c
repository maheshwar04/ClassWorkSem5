#include <stdio.h>

// Function to calculate percentage

float calculate_percentage(int mark1, int mark2, int mark3, int total_marks) {

    return ((mark1 + mark2 + mark3) / (3.0 * total_marks)) * 100.0;

}

// Function to determine grade based on percentage

char determine_grade(float percentage) {

    if (percentage >= 90)

        return 'A';

    else if (percentage >= 80)

        return 'B';

    else if (percentage >= 70)

        return 'C';

    else if (percentage >= 60)

        return 'D';

    else

        return 'F';

}

int main() {

    FILE *file = fopen("input.txt", "r");

    if (file == NULL) {

        printf("Could not open the file.\n");

        return 1;

    }

    int num_students, mark1, mark2, mark3, total_marks;

    float percentage;

    char grade;

    

    // Read the number of students

    fscanf(file, "%d", &num_students);

    int student_count = 1;

    while (student_count <= num_students) {

        // Read the marks for each student

        fscanf(file, "%d, %d, %d", &mark1, &mark2, &mark3);

        total_marks = 50;  // Total marks for each subject is 50

        // Calculate percentage and determine grade

        percentage = calculate_percentage(mark1, mark2, mark3, total_marks);

        grade = determine_grade(percentage);

        // Print the results for each student

        printf("Student %d:\n", student_count);

        printf("Percentage: %.2f%%\n", percentage);

        printf("Grade: %c\n\n", grade);

        student_count++;

    }

    fclose(file);

    return 0;

}

