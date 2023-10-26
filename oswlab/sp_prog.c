#include <stdio.h>
int main(){

float start_odometer, end_odometer, miles_travelled, rate_per_mile=0.35;
printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
printf("Enter beginning odometer reading=> ");
scanf("%f", &start_odometer);
printf("Enter ending odometer reading=> ");
scanf("%f", &end_odometer);


miles_travelled=end_odometer-start_odometer;
printf("You traveled %.1f miles. At $.35 per mile,\n" ,miles_travelled);


float mialege=miles_travelled*rate_per_mile;

printf("Your reimbursement is: $%.2f\n", mialege);
return(0);
}
