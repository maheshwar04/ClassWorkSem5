#include<stdio.h>
int main(){
     int BMI(){
     float weight,height;
 printf("Weight : ");
 scanf("%f",&weight);
  printf("Height : ");
 scanf("%f",&height);
 float bmi=(703*weight)/(height*height);
 if(bmi<18.5){
   printf("Underweight\n");
}else{
   if(bmi<24.9){
    printf("Normal\n");
    }else{
        if(bmi<29.9){
        printf("Overweight\n");
        }else{
       printf("Obese\n");
     }
}
}
}
    BMI();
    return 0;
}
