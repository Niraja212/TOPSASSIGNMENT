/* Write a C program to check if a number is even or odd using an if-else statement.
Extend the program using a switch statement to display the month name based on the 
user’s input (1 for January, 2 for February, etc.). */

#include<stdio.h>
main(){
	
    int num, month;

    // Part 1: Even or Odd using if-else
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("The number is Even.\n", num);
    else
        printf("The number is Odd.\n", num);

    // Part 2: Display month name using switch-case
    printf("\nEnter a number (1 to 12):");
    scanf("%d",&month);
    
    switch(month){
    case 1: 
    printf("\nEnter a number (1-12) to get the corresponding month name: ");
    scanf("%d", &month);

    printf("Month: ");
    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid number! Please enter a value from 1 to 12.\n");
       }
   }
}
