#include<iostream>

using namespace std;

void replaceDup(string s){
    if (s.lenght()==0)
    {
        return " ";
    }

    char ch=s[0];
    string ans = replaceDup(s.substr(1));

    if (ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
    
    
}

int main(){

    cout<<replaceDup("aghshjttthhhusd")<<endl;

    return 0;
}