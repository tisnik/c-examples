/*
 * Example #98
 * 20 concurrent computionally intensive threads.
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS	20

long long factorial(long n) {
    long long result = 1;
    long i;
    for (i = 1; i <= n; ++i)
        result *= i;
    return result;
}

void *thread_implementation(void *t)
{
   int i;
   long tid;
   long long result = 0.0;
   tid = (long)t;
   printf("Thread %ld starting...\n",tid);

   for (i=0; i<10000000; i++)
   {
      result = factorial(tid); 
   }

   printf("Thread %ld done. Result: %i! = %lld\n", tid, tid, result);
   pthread_exit((void*) t);
}

int main (int argc, char *argv[])
{
    pthread_t thread[NUM_THREADS];
    pthread_attr_t attr;
    int rc;
    long i;
    void *status;

    pthread_attr_init(&attr);
    /* vlakna nebudou "odpojena" */
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    for(i=0; i<NUM_THREADS; i++)
    {
        printf("Main: creating thread %ld\n", i);
        rc = pthread_create(&thread[i], &attr, thread_implementation, (void *)i); 
        if (rc)
        {
            printf("ERROR; return code from pthread_create() is %d\n", rc);
            exit(-1);
        }
    }

    /* Free attribute and wait for the other threads */
    pthread_attr_destroy(&attr);
    for(i=0; i<NUM_THREADS; i++)
    {
        rc = pthread_join(thread[i], &status);
        if (rc)
        {
            printf("ERROR; return code from pthread_join() is %d\n", rc);
            exit(-1);
        }
        printf("Main: completed join with thread %ld having a status of %ld\n", i, (long)status);
    }

    printf("Main: program completed. Exiting.\n");
    pthread_exit(NULL);
}

