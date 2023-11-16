#include <stdio.h>

int main() {
  char dob[20];
  printf("Enter the dob:");
  scanf("%s", dob);
  int dd, mm, yy;
  sscanf(dob, "%d-%d-%d", & dd, & mm, & yy);
  printf("Date is %d\n", dd);
  printf("month is %d\n", mm);
  printf("year is %d\n", yy);
  return (0);
}
