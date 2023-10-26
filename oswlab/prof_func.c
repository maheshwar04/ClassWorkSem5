#include <stdio.h>

void BMI (int, float);
int main(void)
{
  float w;
  float h;
       printf("Input the weight: ");
       scanf("%f", &w);
       printf("Input the height: ");
       scanf("%f", &h);
       BMI(w, h);
}

void BMI (int weight, float height){
    float temp = 703*weight/ (height * height);
    printf("BMI = %f\n", temp);
    printf("\nGrade: ");
    temp < 18.5 ? printf("Underweight ") : temp < 25 ? printf("Normal ") : temp < 30 ? printf("Overweight ") : temp < 40 ? printf("Obese ") : printf("Error");
} 
