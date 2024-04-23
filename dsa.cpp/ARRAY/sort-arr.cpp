#include<iostream>

using namespace std;

bool sorting(int arr[], int n){
    if(n==1){
        return true; 
    }

    int restArr = sorting(arr+1, n-1);
    return (arr[0]< arr[1] && restArr);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<sorting(arr,5)<<endl;
    return 0;
}