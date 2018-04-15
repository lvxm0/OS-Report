#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	int pid1=fork();
	printf("**1**\n");
	printf("%d\n",pid1);
	int pid2=fork();
	printf("**2**\n");
	printf("%d\n",pid1);
	printf("%d\n",pid2);
	if(pid1==0){int pid3=fork();printf("**3**\n");}
	else printf("**4**\n");
	return 0;
}	
