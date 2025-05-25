/*Write a C program that accepts two integers from the user and performs arithmetic, relational, 
and logical operations on them. Display the results.*/

#include <stdio.h>

 main() {
    float n1, n2;

    // Input from user
    printf("Enter the first number: ");
    scanf("%f", &n1);

    printf("Enter the second number: ");
    scanf("%f", &n2);

    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    printf("Subtraction: %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    printf("Multiplication: %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);

    if (n2 != 0.0) {
        printf("Division: %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
    } else {
        printf("Not possible \n");
    }

    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("%.2f == %.2f: %d\n", n1, n2, n1 == n2);
    printf("%.2f != %.2f: %d\n", n1, n2, n1 != n2);
    printf("%.2f > %.2f: %d\n", n1, n2, n1 > n2);
    printf("%.2f < %.2f: %d\n", n1, n2, n1 < n2);
    printf("%.2f >= %.2f: %d\n", n1, n2, n1 >= n2);
    printf("%.2f <= %.2f: %d\n", n1, n2, n1 <= n2);

    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(%.2f != 0) && (%.2f != 0): %d\n", n1, n2, (n1 != 0) && (n2 != 0));
    printf("(%.2f != 0) || (%.2f != 0): %d\n", n1, n2, (n1 != 0) || (n2 != 0));

}

