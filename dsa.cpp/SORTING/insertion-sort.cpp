#include <iostream>

using namespace std;

int insertion(int arr[], int size)
{
    int minIndex;
    int temp;
    for (int i = 0; i < size; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    cout << "Unsorted array: ";
    print(arr, size);

    insertion(arr, size);
    cout << "Sorted array: ";
    print(arr, size);
}