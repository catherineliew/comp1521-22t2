#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void *print_msg_thread(void *arg) {
    while (1) {
        printf("Feed me input!\n");
        sleep(1);
    }

}

int main(void) {
    pthread_t thread;
    pthread_create(&thread, NULL, print_msg_thread, NULL);
    
    char line[BUFFER_SIZE];
    while (fgets(line, BUFFER_SIZE, stdin)) {
        printf("You entered: %s\n", line);
    }
    
    return 0;
    
}
