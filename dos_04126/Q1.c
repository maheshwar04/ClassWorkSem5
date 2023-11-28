#include <stdio.h>
#include <unistd.h>
#include <sched.h>
int main(){
	pid_t pid=fork();
	if (pid==-1){
		printf("Fork failed");
		}
	else if(pid==0){
		printf("Child\n");
		}
	else {
		printf("Parent\n");
		}
		return 0;
	}
