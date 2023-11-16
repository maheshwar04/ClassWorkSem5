#include <stdio.h>
#include <math.h>

int main() {
  float mark;
  char grade;

  printf("Enter the mark: ");
  scanf("%f", &mark);

  int intMark = (int)(mark);

  switch (intMark) {
    case 90 ... 100:
      grade = 'O';
      break;
    case 80 ... 89:
      grade = 'A';
      break;
    case 70 ... 79:
      grade = 'B';
      break;
    case 60 ... 69:
      grade = 'C';
      break;
    case 50 ... 59:
      grade = 'D';
      break;
    default:
      grade = 'F';
  }

  printf("Grade: %c\n", grade);

  return 0;
}

