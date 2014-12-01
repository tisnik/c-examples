/*
 * Example #102
 * fork().
 */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int pid;

    printf("This is parent process with PID %d\n", getpid());

    pid = fork();

    if (pid == 0) {
        /* child process */
        printf("This is child process with PID %d and parent PID %d\n", getpid(), getppid());
    }
    else if (pid == -1) {
        /* error during fork() */
        perror("fork");
        exit(1);
    }
    else {
        /* parent process */
        printf("Parent process just created child process with PID %d\n", pid);
    }
    return 0;
}

