#include<stdio.h>

main()
{
	int pid, flag;
	if(pid=fork()) {
	printf("parent- pid = %d, ppid = %d", getpid(), getppid());
	flag=100; }
	else {
	printf("child- pid = %d, ppid = %d", getpid(), getppid());
	flag=200; }
	printf("\nCommon part of parentchild--->flag = %d\n", flag);
}
