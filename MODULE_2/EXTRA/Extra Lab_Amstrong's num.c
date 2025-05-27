/*Write a C program that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3).
Challenge: Write a program to find all Armstrong numbers between 1 and 1000. */

#include <stdio.h>
#include <math.h>

// Function
    int isArmstrong(int num) {
    int originalNum = num, remainder, result = 0, n = 0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;

    // Calculate sum of digits raised to the power n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    return result == num;
}
 main() {
    int num, i;

    // Part 1: Check a single number
    printf("\n Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("\n %d is an Armstrong number.", num);
    else
        printf("\n %d is not an Armstrong number.", num);

    // Part 2: Find all Armstrong numbers between 1 and 1000
    printf("\nArmstrong numbers between 1 and 1000 are: ");
    for(i = 1; i<=1000;i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

