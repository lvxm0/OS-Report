#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	int pid1=fork();
	if(pid1 == 0){

		printf("b\n");
		
		int pid2 = fork();
		
		if(pid2 == 0) {
			printf("c\n");
		}
	}
	else {printf("a\n");}
	return 0;
}	
