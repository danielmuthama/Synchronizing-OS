#include <pthread.h>
#include <stdio.h>

void func5(int argc, char **argv){
 pthread_mutex_t mutex;
 /* create the mutex lock */
 pthread_mutex_init(&mutex, NULL);
 /* acquire the mutex lock */
 pthread_mutex_lock(&mutex);
 /*** critical section ***/
 /* release the mutex lock */
 pthread_mutex_unlock(&mutex);\
}