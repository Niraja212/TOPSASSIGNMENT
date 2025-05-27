/* Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.*/
#include<stdio.h>

main(){

    int number = 10;           
    int *ptr;                  

    ptr = &number;             

    printf("Original value: %d\n", number);
    *ptr = 25;
    printf("Modified value using pointer: %d\n", number);
}

