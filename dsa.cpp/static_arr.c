#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char *strings[5];

    // Input strings
    for (int i = 0; i < 5; i++) {
        printf("Enter string %d: ", i+1);
        char input[MAX_LENGTH];
        fgets(input, sizeof(input), stdin);

        // Allocate memory for the string
        strings[i] = (char*)malloc(strlen(input) + 1);
        if (strings[i] == NULL) {
            printf("Memory allocation failed. Exiting...\n");
            return 1;
        }

        // Copy the string into the allocated memory
        strcpy(strings[i], input);
    }

    // Print strings
    printf("Strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s", strings[i]);
    }

    // Free allocated memory
    for (int i = 0; i < 5; i++) {
        free(strings[i]);
    }

    return 0;
}
