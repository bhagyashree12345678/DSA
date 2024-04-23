#include<iostream>

using namespace std;

void reverse(string s){
    if (s.length() == 0)//base case
    {
        return;
    }
    //recursion case
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0]<<endl;

    
}

int main(){

    reverse("bhagya");

    return 0;
}