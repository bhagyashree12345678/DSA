#include <stdio.h>

int main() {
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int (*array_ptr)[4] = array;  // Pointer to a 2D array with 4 columns

    int n = 1;  // Row index
    int m = 2;  // Column index

    int element = *(*(array_ptr + n) + m);

    printf("Element at (%d, %d) is: %d\n", n, m, element);

    return 0;
}
