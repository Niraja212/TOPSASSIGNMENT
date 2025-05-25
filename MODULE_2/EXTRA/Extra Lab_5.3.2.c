/*Challenge: Modify the program to check if a given string is a palindrome.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome or not
int isPalindromeString(const char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        
        while (!isalnum(str[left]) && left < right) left++;
        while (!isalnum(str[right]) && left < right) right--;

        if (tolower(str[left]) != tolower(str[right])) {
            return 0; 
        }
        left++;
        right--;
    }
    return 1;
}
int main(){

    char str[100];
    printf("Enter a string: ");
    scanf("%d",&str);
    gets(str);
   
    if (isPalindromeString(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

