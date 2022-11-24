 #include <pthread.h>
 #include <stdio.h>

void func4(int argc, char **argv){
 void *thread_entry(void *param) { /* entry point of a new thread */
 ...
 }

 int main(...) {
 pthread_t tid;
 pthread_attr_t attr;
 /* get the default attribute */
 pthread_attr_init(&attr);
 /* create a new thread */
 pthread_create(&tid, &attr, thread_entry, NULL);
 ...
 }
}