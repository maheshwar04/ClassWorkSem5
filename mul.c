#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
if(argc !=3){
printf("Usage: %s <number1> <number2>\n", argv[0]);
return 1;
}
int n1=atoi(argv[1]);
int n2=atoi(argv[2]);
int mul=n1*n2;
printf("Mul: %d\n", mul);

return 0;
}
