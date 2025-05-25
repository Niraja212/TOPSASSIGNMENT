/*Write a C program that defines a structure to store a student's details (name, roll number, and marks).
Use an array of structures to store details of 3 students and print them. */

#include <stdio.h>

struct Student{
    char sname[20];
    int smarks;
    int rollnumber;
};

main() {
	
    struct Student student[3];
    int i;

    // Input section
    for (i = 0; i < 3; i++) {
        printf("\nEnter the details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student[i].sname);

        printf("Marks: ");
        scanf("%d", &student[i].smarks);

        printf("Roll Number: ");
        scanf("%d", &student[i].rollnumber);
    }

    // Output section
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d", i + 1);
        printf("\nName: %s", student[i].sname);
        printf("\nMarks: %d", student[i].smarks);
        printf("\nRoll Number: %d\n", student[i].rollnumber);
    }
}

