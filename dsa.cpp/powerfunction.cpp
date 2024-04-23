#include<iostream>

using namespace std;

int pow(int no, int po)
{
    int ans;
    for (int i = 0; i < po; i++)
    {
       ans = ans * no; 
    }
    return ans;
}

int main()
{
    int n,p,answer;
    cout<<"enter number: ";
    cin>>n;
    cout<<"enter power: ";
    cin>>p;
    cout<<" answer is : "<<pow(n,p)<<endl;
    return 0;

}