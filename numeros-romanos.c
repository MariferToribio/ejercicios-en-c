/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void getRomanNumber(int number){
    if(number < 0 && number > 4000){
        printf("Numero fuera del rango permitido");
        return;
    } 
    
    int unidades = number % 10; 
    number /= 10;
    int decenas = number % 10; 
    number /= 10;
    int centenas = number % 10;
    number /= 10;
    int millares = number % 10; 
    number /= 10;
 
    switch(millares){
        case 1: 
            printf("M"); 
            break;
        case 2: 
            printf("MM"); 
            break;
        case 3: 
            printf("MMM"); 
            break;
        case 4: 
            printf("IV"); 
            break;
    }
 
    switch(centenas){
        case 1: 
            printf("C"); 
            break;
        case 2: 
            printf("CC"); 
            break;
        case 3: 
            printf("CCC"); 
            break;
        case 4: 
            printf("CD"); 
            break;
        case 5: 
            printf("D"); 
            break;
        case 6: 
            printf("DC"); 
            break;
        case 7: 
            printf("DCC"); 
            break;
        case 8: 
            printf("DCCC"); 
            break;
        case 9: 
            printf("CM"); 
            break;
    }
 
    switch(decenas){
        case 1: 
            printf("X"); 
            break;
        case 2: 
            printf("XX"); 
            break;
        case 3: 
            printf("XXX"); 
            break;
        case 4: 
            printf("XL"); 
            break;
        case 5: 
            printf("L"); 
            break;
        case 6: 
            printf("LX"); 
            break;
        case 7: 
            printf("LXX"); 
            break;
        case 8: 
            printf("LXXX"); 
            break;
        case 9: 
            printf("XC"); 
            break;
    }
 
    switch(unidades){
        case 1: 
            printf("I"); 
            break;
        case 2: 
            printf("II"); 
            break;
        case 3: 
            printf("III"); 
            break;
        case 4: 
            printf("IV"); 
            break;
        case 5: 
            printf("V"); 
            break;
        case 6: 
            printf("VI"); 
            break;
        case 7: 
            printf("VII"); 
            break;
        case 8: 
            printf("VIII"); 
            break;
        case 9: 
            printf("IX"); 
            break;
    }
    
}

int main(){
    
    int number = 0;
    
    printf("Ingresa un numero: ");
    scanf("%d", &number);
    
    getRomanNumber(number);

    return 0;
}
