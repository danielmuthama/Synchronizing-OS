 #include <stdlib.h> /* required for rand_r(...) */
 #include "buffer.h"
 #include <stdio.h>


void func3(int argc, char **argv){
 void *producer(void *param) {
 buffer_item rand;
 while (1) {
 /* sleep for a random period of time */
 sleep(...);
 /* generate a random number */
 rand = rand_r(...);
 if (insert_item(rand) < 0) {
 printf(...); // report error condition
 }
 }
 }

 void *consumer(void *param) {
 buffer_item rand;
 while (1) {
 /* sleep for a random period of time */
 sleep (...);
 if (remove_item(&rand) < 0)
 printf(...); // report error condition
 }
 }
}
















-3