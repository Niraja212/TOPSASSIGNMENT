//  C program to display variables, constants, comments, and data types.
//Display their values.
#include <stdio.h>
 main() {

    int age;         
    char grade;     
    float height;    
    const int StudentID = 23801234;

    // Input
    printf("\nEnter the Age: ");
    scanf("%d", &age);

    printf("\nEnter the Grade: ");
    scanf("%c", &grade);

    printf("\nEnter the Height (in feet): ");
    scanf("%0.1f", &height);

    // Output the values
    printf("\n--- Student Details ---\n");
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.1f feet\n", height);
    printf("StudentID: %d\n", StudentID);

}
 
