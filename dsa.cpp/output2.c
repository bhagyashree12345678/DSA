#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *file;
    char filename[] = "output2.txt";
    int i;
    double sum = 0.0;
    double average;

    // Check if the correct number of arguments were provided
    if (argc != 6) {
        printf("Please provide 5 values as command line arguments.\n");
        return 1;
    }

    // Open the file for writing
    file = fopen(filename, "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Compute the sum of the values
    for (i = 1; i < argc; i++) {
        double value = atof(argv[i]);
        sum += value;
    }

    // Compute the average
    average = sum / (argc - 1);

    // Write the average to the file
    fprintf(file, "Average: %.2lf\n", average);

    // Close the file
    fclose(file);

    printf("Average computed successfully and stored in 'output2.txt'.\n");

    return 0;
}
