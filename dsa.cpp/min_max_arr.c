#include <stdio.h>

void findMinMaxSum(int *arr, int size, int *min, int *max, int *sum) {
    // Initialize min, max, and sum with the first element of the array
    *min = *max = *sum = arr[0];

    // Iterate through the array starting from the second element
    for (int i = 1; i < size; i++) {
        // Update min if the current element is smaller
        if (arr[i] < *min) {
            *min = arr[i];
        }

        // Update max if the current element is larger
        if (arr[i] > *max) {
            *max = arr[i];
        }

        // Add the current element to the sum
        *sum += arr[i];
    }
}

int main() {
    int arr[] = {9, 5, 7, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min, max, sum;
    findMinMaxSum(arr, size, &min, &max, &sum);

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    printf("Sum of elements: %d\n", sum);

    return 0;
}
