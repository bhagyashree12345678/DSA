#include <iostream>
using namespace std;

void dec(int n){
    if (n==1)
    {
        cout <<"1"<< endl;
        return ;
    }

    cout<<n<<endl;
    dec(n-1);
    
}

void inc(int n)
{
    if (n == 1)
    {
        cout <<"1"<< endl;
        return ;
    }

    inc(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    cout<<"increasing order"<<endl;
    inc(n);
    cout<<endl;
    cout<<"decreasing order"<<endl;
    dec(n);

    return 0;
}