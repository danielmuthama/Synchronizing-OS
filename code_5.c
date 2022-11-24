 #include <semaphore.h>
 #include <stdio.h>


 void func6(int argc, char **argv){
 sem_t sem_mutex;
 /* create the semaphore */
 sem_init(&sem_mutex, 0, 1);
 /* acquire the semaphore */
 sem_wait(&sem_mutex);
 /*** critical section ***/
 /* release the semaphore */
 sem_post(&sem_mutex);
 }