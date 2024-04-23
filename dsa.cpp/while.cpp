#include<iostream>
using namespace std;

int main()
{
    //WHILE LOOP
    // int a=0;
    // while (a<10)
    // {
    //     cout<<"HY"<<endl;
    //     a++;
    // }
    
    //DO WHILE LOOP

    // int a=1;
    // do
    // {
    //     cout<<"HY"<<endl;
    //     a++;
    // }while (a<5);

    
    // return 0;

    int a=0;
    while (a<10)
    {
        a++;
        if(a == 5)
        continue;
        cout<<a<<endl;
    }
}