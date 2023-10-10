#include <stdio.h>

float calculate_percentage(int mark1, int mark2, int mark3) {
  return ((float)(mark1 + mark2 + mark3) / 150.0) * 100.0;
}

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
  int num_students, mark1, mark2, mark3;
  float percentage;
  char grade;

  scanf("%d", & num_students);

  for (int student_count = 1; student_count <= num_students; student_count++) {

    scanf("%d %d %d", & mark1, & mark2, & mark3);

    percentage = calculate_percentage(mark1, mark2, mark3);
    grade = determine_grade(percentage);

    printf("Student %d\n", student_count);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n\n", grade);
  }

  return 0;
}
