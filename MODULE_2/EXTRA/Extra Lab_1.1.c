/* Simple Calculator: Write a C program that acts as a simple calculator. 
The program should take two numbers and an operator as input from the user 
and perform the respective operation(addition,subtraction,multiplication,division, or modulus) using operators.*/

#include <stdio.h>

main() {
	
    int num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            printf("\nResult: %d", num1 + num2);
            break;
        case '-':
            printf("\nResult: %d", num1 - num2);
            break;
        case '*':
            printf("\nResult: %d", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result: %d\n",num1 % num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
}

