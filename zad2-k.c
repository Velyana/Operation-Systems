#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

main() {
	int p, pid = 8;
	if( (pid =fork() ) == 0) ++p;
	else {
		wait(); --p;
	}
	++p;
	printf("\nStoinostta na p = %d", p);
}
