/*Write a C program that takes an integer from the user and checks the following using different operators: 
1.Whether the number is even or odd. 2.Whether the number is positive, negative, or zero.
3.Whether the number is a multiple of both 3 and 5. */

#include<stdio.h>

    main() {
    int n1, n2, n3;

    // Check if number is even or odd
    printf("\n Enter the value of the first number: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0) {
        printf("\n Number is even");
    } else {
        printf("\n Number is odd");
    }

    // Check if number is positive, negative, or zero
    printf("\nEnter the value of the second number: ");
    scanf("%d", &n2);

    if (n2 > 0) {
        printf("\nNumber is positive");
    } else if (n2 < 0) {
        printf("\nNumber is negative");
    } else {
        printf("\nNumber is zero");
    }

   // check if number is multiple of 3 and 5
   printf("\nEnter the value of the third number: ");
    scanf("%d", &n3);
    
    if (n3 % 3 == 0 || n3 % 5 == 0) {
        printf("Number is divisible by 3 or 5 .\n");
    } else {
        printf("Not divisible.\n");
    }
}

