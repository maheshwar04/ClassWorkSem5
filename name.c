#include <stdio.h>

void print_name(int n) {
  if (n == 0) {
    return;
  }

  print_name(n - 1);
  printf("akash\n");
}

int main() {
  print_name(20);

  return 0;
}

