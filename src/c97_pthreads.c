/*
 * Example #97
 * 10 concurrent threads.
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS 10

char *messages[] = {
    "Lorem", "ipsum", "dolor", "sit",
    "amet", "consectetur", "adipisicing", "elit",
    "sed", "do"
};

typedef struct {
   int   thread_id;
   char *message;
} thread_data;

thread_data thread_data_array[NUM_THREADS];

void *thread_implementation(void *arg)
{
    thread_data *my_data;
    my_data = (thread_data *) arg;

    printf("thread id = %ld\n", my_data->thread_id);
    printf("message = %s\n", my_data->message);
}

int main (int argc, char *argv[])
{
    pthread_t threads[NUM_THREADS];
    int rc;
    long i;
    for(i=0; i<NUM_THREADS; i++)
    {
        printf("main(): creating thread %ld\n", i);
        thread_data_array[i].thread_id = i;
        thread_data_array[i].message = messages[i];
        rc = pthread_create(&threads[i], NULL, thread_implementation, (void *) &thread_data_array[i]);
        if (rc)
        {
            printf("ERROR; return code from pthread_create() is %d\n", rc);
            exit(-1);
        }
    }

    pthread_exit(NULL);
}

