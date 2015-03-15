#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>


void task(const char* command, char** argv) {
    printf("%d %d\n", getpid(), getppid());
    int status;
    pid_t id;
    pid_t child_id = fork();
    if (child_id == 0) {
        execvp(command, argv);
        exit(0);
    } else {
        id = wait(&status);
        printf("Return status: %d %d\n", status, id);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        perror("Usage: 14_1 command [options]");
        return 1;
    }

    task(argv[1], argv + 1);

    return 0;
}
