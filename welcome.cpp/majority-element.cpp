#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int a[], int size)
{
    int count = 1, maj_element = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[maj_element] == a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            maj_element = i;
            count = 1;
        }
    }
    return a[maj_element];
}

bool majElement(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)

    if (a[i] == cand)
    count++;

    if (count > size / 2)
    return 1;

    else
    return 0;
}

// function to print majority element
void printMajority(int a[], int size)
{
    // find the candidate for majority
    int cand = findMajorityElement(a, size);

    // print the candidate for majority
    if (majElement(a, size, cand))
        cout << " " << cand << " ";

    else
        cout << "No majority element";
}

int main()
{
    int a[] = {1, 2, 2, 3, 4, 5, 6, 7, 7, 7, 7,8};
    int size = (sizeof(a) / sizeof(a[0]));

    printMajority(a, size);

    return 0;
}
