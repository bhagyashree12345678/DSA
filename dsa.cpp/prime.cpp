#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"Enter number to check prime : ";
    cin>>n;
    
for (int i=2; i*i<n; i++)
{
    if((n%i)==0)
    {
        cout<<"not a prime"<<endl;
        break;
    }
}
if((i*i)==n)
{
    cout<<"is a prime"<<endl;
}
return 0;
} 
