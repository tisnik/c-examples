/*
 * Example #105
 * Basic usage of Posix threads.
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <sys/types.h>

void *thread_implementation(void *garbage)
{
    long thread_id = syscall(SYS_gettid);
    printf("thread id = %ld is going to sleep\n", thread_id);
    sleep(5);
    printf("thread id = %ld is awake\n", thread_id);
    return;
}

int main (int argc, char *argv[])
{
    pthread_t thread;
    int rc;

    printf("main(): creating new thread\n");
    rc = pthread_create(&thread, NULL, thread_implementation, NULL);
    if (rc) {
        printf("ERROR; return code from pthread_create() is %d\n", rc);
        exit(-1);
    }
    else {
        thread_implementation(NULL);
    }
    printf("Joinining both threads...\n");
    pthread_join(thread, NULL);
    return 0;
}

