#include<stdio.h> 
int sum(int *a, int *b){
    int temp;
    temp=*a + *b;
    return temp;
}
int main(){

int a=5, b=8;
  printf("%d\n",sum(&a,&b));

return 0;

}

