#include<stdio.h>
int main(){
float c, f;

printf("Enter temp in celcius:");
scanf("%f", &c);
printf("\nTEMP CONVERT\n");

printf("Temp in degree C : %f\n", c);
f=(c*9/5)+32;
printf("Temp in degree F : %.2f\n", f);
return 0;
}
