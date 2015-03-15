#include<stdlib.h>
#include<stdio.h>

main()
{
	if(fork() == 0) {
	printf("children: children pid: %d, parendt pid: %d", getpid(), getppid());
	}
	else {
	wait();
	printf("parent: children pid: %d, parent pid: %d", getpid(), getppid());
	}
	printf("\nCommon part of parent+child\n");
} 
