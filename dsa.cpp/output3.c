#include <stdio.h>

#define SIZE 3

void multiplyMatrices(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
    int i, j, k;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void writeMatrixToFile(int matrix[][SIZE], FILE *file) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            fprintf(file, "%d ", matrix[i][j]);
        }
        fprintf(file, "\n");
    }
}

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[] = "input3.txt";
    char outputFileName[] = "output3.txt";
    int matrix1[SIZE][SIZE];
    int matrix2[SIZE][SIZE];
    int result[SIZE][SIZE];
    int i, j;

    // Open the input file
    inputFile = fopen(inputFileName, "r");

    // Check if the input file was opened successfully
    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return 1;
    }

    // Read the first matrix from the input file
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (fscanf(inputFile, "%d", &matrix1[i][j]) != 1) {
                printf("Error reading the input file.\n");
                fclose(inputFile);
                return 1;
            }
        }
    }

    // Read the second matrix from the input file
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (fscanf(inputFile, "%d", &matrix2[i][j]) != 1) {
                printf("Error reading the input file.\n");
                fclose(inputFile);
                return 1;
            }
        }
    }

    // Close the input file
    fclose(inputFile);

    // Perform matrix multiplication
    multiplyMatrices(matrix1, matrix2, result);

    // Open the output file for writing
    outputFile = fopen(outputFileName, "w");

    // Check if the output file was opened successfully
    if (outputFile == NULL) {
        printf("Failed to open the output file.\n");
        return 1;
    }

    // Write the result matrix to the output file
    writeMatrixToFile(result, outputFile);

    // Close the output file
    fclose(outputFile);

    printf("Matrix multiplication computed successfully and stored in 'output3.txt'.\n");

    return 0;
}
