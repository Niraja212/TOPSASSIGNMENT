/* Write a C program that generates Pascal's Triangle up to N rows using loops.
Challenge: Implement the same program using a recursive function.
*/

#include<stdio.h>
// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate binomial coefficient C(n, k)
int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

 main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    printf("\nPascal's Triangle (using loops):\n");
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++)
            printf("  ");
        
        for (int j = 0; j <= i; j++) {
            printf("%4d", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}
	
}
