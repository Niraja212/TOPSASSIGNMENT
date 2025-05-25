/* Write a C program that takes a number as input and checks whether it is a palindrome using a function.
*/

#include <stdio.h>
//To check if a number is a palindrome or not
int isPalindromeNumber(int num) {
    int original = num, rev = 0, rem;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    return original == rev;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindromeNumber(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindromeString(const char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Ignore case and non-alphanumeric characters (optional)
        while (!isalnum(str[left]) && left < right) left++;
        while (!isalnum(str[right]) && left < right) right--;

        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }

    return 1; // Palindrome
}
int main(){

    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindromeString(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

