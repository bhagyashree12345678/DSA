#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,var1,var2,count=0;
    cin>>x;
     var1=ceil(sqrt(x));
     var2=x;

    for(int i=2;i<=var1;i++)
    {
        if(var2%i==0)
         count=1;
    } 

    if((count == 0 && var2!=1) || var2 == 2 || var2 == 3)
       cout<<"its a prime number";
    else
       cout<<"not a prime number";
}







