#include <stdio.h>
#include <math.h>

double calculatePolygonArea(int n, double x[], double y[]) {
  double area = 0.0;
  for (int i = 0; i < n - 1; i++) {
    area += fabs((x[i + 1] + x[i]) * (y[i + 1] - y[i]));
  }
  area *= 0.5;
  return area;

}
int isPolygonOpen(int n, double x[], double y[]) {
  return (x[0] != x[n - 1] || y[0] != y[n - 1]);
}
int main() {
  int n = 7;
  double x[7];
  double y[7];
  for (int i = 0; i < n; i++) {
    scanf("%lf", & x[i]);
  }

  for (int i = 0; i < n; i++) {

    scanf("%lf", & y[i]);

  }

  double area = calculatePolygonArea(n, x, y);

  int isOpen = isPolygonOpen(n, x, y);

  if (isOpen) {

    printf("false\n");

  } else {

    printf("Area of the polygon is: %.2lf\n", area);

  }

  return 0;

}
