#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int cat(const char *file) {
	int fd = open(file, O_RDONLY);
	if(fd == -1)
		return 1;
	char buf[1];
	while(read(fd, &buf, 1) > 1)
		printf("%c", buf[0]);
	close(fd);
	return 0;
}

int main(int argc, char *argv[]) {
	if(argc != 2) {
	printf("Usage: cat file");
	return 1;
	}
	return cat(argv[1]);
}
