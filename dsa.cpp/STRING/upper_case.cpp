#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main()
{
    string str = "ghsduuisolsd";

    // convert into uppercase-----
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        cout << str << endl;
    }
    cout<<endl;

    // convert into lowercase----
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        cout << str << endl;
    }
    cout<<endl;

    //inbuild function to convert uppercase----
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<endl;

    //inbuild function to convert lowercase----
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<endl;

    return 0;
}