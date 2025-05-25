/*Write a C program to create a file, write a string into it, close the file,
then open the file again to read and display its contents. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char *filename = "example.txt";
    char *text = "Hello, this is a test string written to a file.";
    char buffer[100];

    // Step 1: Create and write to the file
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fprintf(file, "%s", text);
    fclose(file);

    // Step 2: Reopen the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Step 3: Read and display the content
    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}

