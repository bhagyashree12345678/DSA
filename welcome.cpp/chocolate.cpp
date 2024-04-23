#include<bits/stdc++.h>


using namespace std;

int chocholate(int arr[],int n,int m){
    sort(arr, arr + n);
    int min = INT_MAX;
    for(int i = 0;i + m - 1 < n; i++){
        int diff = arr[i+m-1] - arr[i];
        if(diff < min)
        min=diff;

    }
    return min;
}

int main(){

    int arr[] = { 1,2,3,4,5,67,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 5;

    cout<< " min difference is " << chocholate(arr,n,m);

    return 0;
}