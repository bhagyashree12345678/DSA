#include<iostream>

using namespace std;

void moveX(string s){
    if (s.length()==0)
    {
       return " ";
    }

    char ch=s[0];
    string ans = moveX(s.substr(1));

    if (ch=='x')
    {
       return ans+ch;
    }
    return ch+ans;
    
    
}

int main(){

    cout<<moveX("axxbdxcefxhix")<<endl;

    return 0;

}