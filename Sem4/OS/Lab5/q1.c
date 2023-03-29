#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid;

    // create a child process
    pid = fork();

    if (pid < 0) // fork failed
    {
        fprintf(stderr, "Fork Failed");
        exit(1);
    }
    else if (pid == 0) // child process
    {
        printf("This is the child process\n");
        printf("PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
    }
    else // parent process
    {
        printf("This is the parent process\n");
        printf("PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
    }

    return 0;
}
