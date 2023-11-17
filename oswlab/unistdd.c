#include <stdio.h>
#include <unistd.h>
int main(){
for(int i=0; i<3; i++)
if (fork())
while(1);
printf("%d", getpid());

return 0;
}

//if terminal is running at 100 pid write the child parent relation in above program. How many times "Hello" will be printed?
