/* Write a C program that takes a number as input and checks whether it is a palindrome using a function.
Challenge: Modify the program to check if a given string is a palindrome.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], longestWord[50],currentWord[50];
    int i=0,wordCount=0,maxLen=0,currLen=0;

    printf("Enter a sentence: ");
    gets(sentence);

    while (sentence[i]!='\0') {
    	
        if ((sentence[i]!=' ') && (sentence[i]!='\n')) {
            currentWord[currLen]=sentence[i];
            currLen++;
        } else {
            if(currLen>0) {
                currentWord[currLen]='\0';
                wordCount++;

                if (currLen>maxLen) {
                    maxLen=currLen;
                    strcpy(longestWord,currentWord);
                }
                currLen = 0;
            }
        }
        i++;
    }
    printf("\nTotal words: %d \n",wordCount);
    printf("Longest word: %s (Length: %d)\n",longestWord,maxLen);
}
