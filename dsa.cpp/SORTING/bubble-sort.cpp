
#include<iostream>
using namespace std;


int main( )
{
    int arr[] = {6, 5, 3, 4, 1, 2, 7};
    int size = sizeof(arr)/sizeof(int);
    int temp;

   cout<<"Unsorted array is : ";
    for (int i = 0; i < size; i++)
       cout<<arr[i];
    cout<<endl;
    
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
       
    }
    
    cout<<"Sorted array is : ";
    for (int i = 0; i < size; i++)
       cout<<arr[i];
    cout<<endl;


}