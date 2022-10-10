#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(){



	pid_t pid;

	//to make a zombie, need a child
	pid = fork();


	if(pid < 0){
		fprintf(stderr, "Error: unable to create child\n");
		return -1;
	}


	else if(pid == 0){
	//just need to exit child without waiting parent to make a zombie
	return 0;
	}

else{
	printf(" \n waiting \n");
	sleep(15);
	printf(" \n 15 seconds have passed \n");
	sleep (100);
	return 0;
	}
}
