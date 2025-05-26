/*Write a C program that takes the marks of a student as input and displays the corresponding grade
based on the following conditions: 1.Marks > 90: Grade A 2.Marks > 75 and <= 90: Grade B 
3.Marks > 50 and <= 75: Grade C 4.Marks <= 50: Grade D.
Use if-else or switch statements.*/

#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks of student(0 - 100): ");
    scanf("%d", &marks);

    if (marks<0 || marks>100) {
        printf("Invalid input.Marks must be between 0 and 100.\n");
    }
    else if (marks>90 && marks<=90) {
        printf("\n Grade A");
    }
    else if (marks>75) {
        printf("Grade B");
    }
    else if (marks>50) {
        printf("Grade C");
    }
    else{
        printf("Grade D");
    }

    return 0;
}



