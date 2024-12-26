#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Prompt user to enter the file name
    printf("Enter the name of the file to read: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1; // Exit if file cannot be opened
    }

    printf("Contents of the file %s:\n", filename);

    // Read and display the file content character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Print the character to the console
    }

    // Close the file
    fclose(file);

    return 0;
}