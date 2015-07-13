#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>


void* fun(void *arg){
    execl("../Pthread_Forks/prog","prog",NULL);
    exit(666);
    printf("Koniec Funkcji2 \n");
    return 0;
}

int main(){
    pthread_t thread_id;
    pthread_create(&thread_id,NULL,fun,NULL);
    pthread_join(thread_id,NULL);
    printf("Koniec maina2 \n");
    return 0;
}
