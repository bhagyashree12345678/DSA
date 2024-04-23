#include<bits/stdc++.h>
using namespace std;

int maxElement(int A[],int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(A[i]>max)
        max = A[i];
    }
    return max;
    
}

int minElement(int A[],int n)
{
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(A[i]<min)
        min = A[i];
    }
    return min;
}

int main(){
    int A[] ={ 1,2 ,3,4,5,6};
    int n = 6;
    cout<<"max element is: "<<maxElement(A,n)<<endl;
    cout<<"min element is: "<<minElement(A,n);

    return 0;
}