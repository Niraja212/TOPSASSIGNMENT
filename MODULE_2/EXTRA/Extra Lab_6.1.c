/*
? Write a C program that takes a string as input and reverses it using a function.
? Challenge: Write the program without using built-in string handling functions.
*/
#include <stdio.h>

// Function to reverse a string
int reverseString(char str[]) {
    int start = 0, end, temp;

    for (end = 0; str[end] != '\0'; end++);
    end--;

    while(start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
