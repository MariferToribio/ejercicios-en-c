/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float average(int array[], int arraySize){
    float suma = 0;
    for(int i = 0; i < arraySize; i++){
        suma += array[i];
    }
    
    return suma / arraySize;
}

int maximumValue(int array[], int arraySize){
    if(arraySize == 1){
        return 
    }
}

int minimumValue(int array[], int arraySize){
    
}

int main()
{
    int tam = 0;
    
    printf("Ingresa tamanio de arreglo: ");
    scanf("%d", &tam);
    
    int arreglo[tam];
    for(int i = 0; i < tam; i++){
        printf("Ingresa dato[%d]: ", i+1);
        scanf("%d", &arreglo[i]);
    }

    printf("Promedio: %f", average(arreglo, tam));

    return 0;
}
