#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "input1.txt";
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0, isWord = 0;

    // Open the file
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        // Check for new lines
        if (ch == '\n')
            lineCount++;

        // Check for words
        if (ch == ' ' || ch == '\n' || ch == '\t')
            isWord = 0;
        else if (isWord == 0) {
            isWord = 1;
            wordCount++;
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}
