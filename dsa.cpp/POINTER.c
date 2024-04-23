#include <stdio.h>

void bubbleSort(int *arr, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap adjacent elements
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int i, size;
    int arr[] = {5, 1, 4, 2, 8};
    size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    bubbleSort(arr, size);

    printf("\nSorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
