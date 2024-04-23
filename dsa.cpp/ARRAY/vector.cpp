#include <bits/stdc++.h>
// #include <vector>

using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; i++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<int> v; // declaration
    // input some values to the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // print the element of vector-method 1
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    // method-2 to print the vector
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // Traversal of the vector
    for (auto element : v)
    {
        cout << element << endl;
        ;
    }

    v.pop_back(); // 1 2 3

    vector<int> v2(3, 50); // 50 50 50

    swap(v, v2);
    for (auto element : v)
    {
        cout << element << endl;
        ;
    }
    for (auto element : v2)
    {
        cout << element << endl;
        ;
    }

    sort(v.begin(), v.end());

    return 0;
}