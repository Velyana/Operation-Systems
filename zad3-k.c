#include<stdio.h>
#include<fcntl.h>

main() {
	int pid, fd1, fd2, n_byt, i=0;
	char sline[25], c;
	pid = fork();
	if(pid) {
		wait();
		if(open("filenew", O_RDONLY) != -1)
		execlp("grep", "grep", "ps", "filenew", 0);
		exit(1);
	} else {
		if( (fd1=creat("filenew", 0777)) == -1) {
		printf("\nCannot create \n");
		 exit(1);
		}
		if( (fd2=open("fileBB.txt", O_RDONLY) ) == -1) {
		printf("\ncannot open \n");
		exit(1);
	}
	n_byt=read(fd2, sline, 15);
	c=sline[i];
	if(c<='0' || c>='9') {
		while(sline[i]!='\n' && i<15) {
		write(1, "x", 1);
		 ++i;
		}
	write(1, "\n", 1);
	}
	wtite(1, sline, n_byt);
	write(1, "\n");
	write(fd1, sline, n_byt);
	write(fd1, "\n", 1);
	close(fd1);
	close(fd2);
	}
}
