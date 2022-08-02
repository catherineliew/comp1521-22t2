#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_msg_thread(void *arg) {

    char *msg = arg;
    while (1) {
        printf("%s", msg);
    }
    
    return NULL;
}

int main(void) {
    
    char *message = "Hello\n";
    
    pthread_t thread;
    pthread_create(&thread, NULL, print_msg_thread, message);
    
    while (1) {
        printf("there!\n");
    }
    
    return 0;
}
