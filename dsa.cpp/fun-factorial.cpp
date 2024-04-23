#include<iostream>

using namespace std;

int factorial(int n)
{
   int ans= 1;
   cin>>n;
   for (int i = 1; i > 0; i--)
   {
       ans *= i;
   }
   return ans;
}

int main()
{
    int no;
    cin>>no;
    cout<<"enter the no to find factorial: "<<no<<factorial(no)<<endl;
    return 0;
}