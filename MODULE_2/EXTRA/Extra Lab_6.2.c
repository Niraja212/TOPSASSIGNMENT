/*
Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.
? Challenge: Extend the program to also count digits and special characters.
*/
#include<stdio.h>
main() {
    char str[100],ch;
    int i, vowels=0, consonants=0, digits=0, special=0;

    printf("Enter a string: ");
    gets(str);
    
    for(i=0; str[i]!='\0'; i++) {
        ch=str[i];
        
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
           ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U') {
            vowels++;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            consonants++;
        }
        else if(ch>='0' && ch<='9') {
            digits++;
        }
        else if(ch!=' ') {
            special++;
        }
    }
    printf("Vowels: %d \n", vowels);
    printf("Consonants: %d \n", consonants);
    printf("Digits: %d \n", digits);
    printf("Special characters: %d \n", special);
}

