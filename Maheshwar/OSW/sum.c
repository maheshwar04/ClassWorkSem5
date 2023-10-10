#include<stdio.h>
void print(int i){
if(i==1){
 return;
}else{
  printf("Maheshwar\n");
  print(i-1);
}


}
int main(){
//int n;
//scanf("%d",&n);
//int sum=(n*(n+1))/2;
//printf("%d\n",sum);
print(10);
return 0;
}
