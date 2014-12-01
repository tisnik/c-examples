/*
 * Example #103
 * fork() and exec().
 */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void child_process_func(void)
{
    printf("Child is going to run ls\n");
    execlp("ls", "ls", "-aF", "/", (char*)0);
    perror("execlp");
    exit(1);
}

int main(int argc, char **argv)
{
    int pid = fork();

    if (pid == 0) {
        /* child process */
        child_process_func();
    }
    else if (pid == -1) {
        /* error during fork() */
        perror("fork");
        exit(1);
    }
    else {
        printf("Parent created child process with PID %d\n", pid);
        printf("(parent is going to sleep for 10 seconds, in the meantime try to run 'ps')\n");
        sleep(10);
        printf("Exiting!\n");
        exit(0);
    }
}

