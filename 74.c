#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, vowels = 0, consonants = 0, punctuation = 0, spaces = 0;

    // Prompt user to enter the filename
    printf("Enter the name of the file to analyze: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    int inWord = 0; // Flag to track if inside a word

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++; // Count characters

        if (isspace(ch)) {
            spaces++; // Count spaces
            if (inWord) {
                words++; // Count words
                inWord = 0;
            }
        } else if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++; // Count vowels
            } else {
                consonants++; // Count consonants
            }
            inWord = 1; // Inside a word
        } else if (ispunct(ch)) {
            punctuation++; // Count punctuation marks
        }
    }

    // If the file ends while still in a word, count that word
    if (inWord) {
        words++;
    }

    // Close the file
    fclose(file);

    // Display results
    printf("\nAnalysis of the file '%s':\n", filename);
    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
    printf("Total punctuation marks: %d\n", punctuation);
    printf("Total spaces: %d\n", spaces);

    return 0;
}