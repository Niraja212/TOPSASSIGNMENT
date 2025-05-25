/* Write a C program that checks whether a given number is a prime number or not using a for loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number.
*/

#include <stdio.h>
main() {
    int N, num, i, isPrime;
    printf("Enter a number: ");
    scanf("%d", &N);
    
    printf("Prime numbers between 1 and %d are:\n", N);
    for (num = 2; num <= N; num++) {
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
        	printf("%d ", num);
		}      
    }
    printf("\n ");
}
