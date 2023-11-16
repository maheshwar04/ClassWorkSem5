#include<stdio.h>
int main(){
int a=5;
printf("Value of a is %d", a);
printf("Size of a is %ld", sizeof(a));
printf("Address in a =%p", &a);
int *p;
p=&a;
printf("Value of p is %p", p);
printf("Size of p is %ld", sizeof(p));
printf("Address in p =%p", &p);
return(0);
}
