#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

void task() {
	printf("%d %d\n", getpid(), getppid());
	execlp("ps", "ps", 0);
}

int main(int argc, char *argv[]) {
	task();
	return 0;
}
