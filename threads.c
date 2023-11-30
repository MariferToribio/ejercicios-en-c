/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <pthread.h>

void *storeValue(void *arg){
    int array[50];
    
    srand(time(NULL));
    for(int i = 0; i < 50; i++){
        array[i] = rand() % 1000;
    }
    
}

void *readValue(void *n){
    printf("--------------------------");
    for(int i = 0; i < 50; i++){
        printf("%d\n", *(int*)n);
        n++;
        
    }
    
}

int main()
{
    int num = 5;
    void *ptr;
    ptr = &num;
    
    int array[50];
    
    srand(time(NULL));
    for(int i = 0; i < 50; i++){
        array[i] = rand() % 1000;
    }
    
    for(int i = 0; i < 50; i++){
        printf("%d\n", array[i]);
    }
    
    printf("--------------------------");
    
    ptr = &array[50];
    
    /*    
    for(int i = 0; i < 50; i++){
        printf("%d\n", *(int*)ptr);
        *ptr++;
        
    }*/
    
    pthread_t tStore;
    pthread_t tRead; 
    
    pthread_create(&tStore, NULL, storeValue, NULL);
    pthread_create(&tRead, NULL, readValue, ptr);
    
    pthread_join(tStore, NULL);
    pthread_join(tRead, NULL);

    return 0;
}
