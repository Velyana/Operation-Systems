#include<stdlib>
#include<stdio.h>

main()
{
	int i=3;
	if(fork() ) {
	--i;
	wait();
	printf("\nStoinostta na i = %d", i);
	}
	else {
	i++;
	exit(0);
	if(execlp("ls", "ls", "-l", 0) == -1)
	i += 2;
	else
	printf("\nStoinostta na i = %d", i);
	}
}
