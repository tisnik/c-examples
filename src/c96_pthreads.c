/*
 * Example #96
 * Basic usage of Posix threads.
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS 10

void *thread_implementation(void *threadid)
{
    long thread_id;
    thread_id = (long)threadid;
    printf("thread id = %ld\n", thread_id);
    pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
    pthread_t threads[NUM_THREADS];
    int rc;
    long i;
    for(i=0; i<NUM_THREADS; i++)
    {
        printf("main(): creating thread %ld\n", i);
        rc = pthread_create(&threads[i], NULL, thread_implementation, (void *)i);
        if (rc)
        {
            printf("ERROR; return code from pthread_create() is %d\n", rc);
            exit(-1);
        }
    }

    pthread_exit(NULL);
}

