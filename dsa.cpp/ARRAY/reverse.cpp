#include <iostream>

using namespace std;

void reverse(int arr[], int begin, int end)
{

    while (begin < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    return arr[];
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = arr.sizeof();

    print(int arr[], n);

    reverse(int arr[], 0, n - 1);

    cout << "reverse array: " << endl;

    print(int arr[], n);

    return 0;
}