/*  Write a C program that takes two strings from the user and concatenates them using strcat().
Display the concatenated string and its length using strlen(). */

#include<stdio.h>
#include<string.h>
main(){
	
	char str1[200], str2[100];
 
    // Input from user
    printf("\n Enter the first string: ");
    scanf("%d",str1);
    gets(str1);
   
    printf("\n Enter the second string: ");
    scanf("%d",str1);
	gets(str2);

    //Concatenate str2 to str1
    strcat(str1, str2);

    // Displaying the result
    printf("\n Concatenated string is: %s", str1);
    printf("\n Length of the string is: %d", strlen(str1));
}
