#include<iostream>

using namespace std;

void pattern()
{
    int n;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           cout<<"*";
        }
       cout<<endl; 
    }
    
}

int main()
{
   pattern();
   pattern();
   pattern();
   return 0;
}