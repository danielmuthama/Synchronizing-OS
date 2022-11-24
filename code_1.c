#include <stdio.h>
 #include "buffer.h"

void func2(int argc, char **argv){
 /* the buffer */
 buffer_item buffer[BUFFER_SIZE];

 int insert_item(buffer_item item) {
 /* insert an item into buffer */
 printf("producer produced %d\n", item); /* return 0 if successful, otherwise
 return -1 indicating an error condition */
 }
/* remove item */
 int remove_item(buffer_item *item) {
 /* remove an object from buffer and placing it in item*/
 printf("consumer consumed %d\n", rand);
 /* return 0 if successful, otherwise
 return -1 indicating an error condition */
 }
}