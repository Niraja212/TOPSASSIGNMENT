/*Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.
Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.
*/

#include <stdio.h>
int recursiveCalls = 0;

int fiboRecursive(int n) {
    recursiveCalls++;
    if (n == 0){ return 0;
	} 
    if (n == 1){ return 1;
	}
    return fiboRecursive(n - 1) + fiboRecursive(n - 2);
}
int fiboIterative(int n) {
	
    int a = 0, b = 1, next, i;
    if (n == 0){ return 0;
	} 
    if (n == 1){ return 1;
	}

    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}
main() {
    int n, i, Iterative, Recursive, calls;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);
    printf("\nFibonacci sequence up to %d terms (recursive) is \n", n);
    
    for (i = 0; i < n; i++) {
        printf("%d ", fiboRecursive(i));
    }
    Recursive = fiboRecursive(n - 1);
    calls = recursiveCalls;

    Iterative = fiboIterative(n - 1);
    printf("\n\nNth Fibonacci number using recursion: %d",Recursive);
    printf("\nRecursive calls made: %d", calls);

    printf("\nNth Fibonacci number using iteration: %d",Iterative);
}
