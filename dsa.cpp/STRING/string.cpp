#include <iostream>
#include<algorithm>
#include <string>

using namespace std;

int main()
{

    string str; // declaration of string

    // get in one line
    //  getline(cin, str);

    string s1 = "family";
    string s2 = "ily";

    // append two strings
    //  s1.append(s2);
    // cout<<s1<<endl;

    // another way
    // cout << s1 + s2 << endl;

    // access one letter from a string
    //  cout<<s1[0];

    // clear a string
    //  s1.clear();

    // Compare two string
    //  cout<<s1.compare(s2)<<endl;

    if (s1.empty())
    {

        cout << "string is empty" << endl;
    }else {
        cout<<"string is not empty"<<endl;
    }

    // s1.erase(1,3);
     //erase elements from a string 
    // cout<<s1<<endl;

    //find an element
    // cout<<s1.find("ily")<<endl;

    //insert some element or elements
    cout<<s1.insert(1,"lol")<<endl;

    cout<<s1.size()<<endl; // size of string
    
    //print every element of a string
    for (int  i = 0; i < s1.length(); i++)
    {
        cout<<s1[i]<<endl;
    }

    cout<<s1.substr(3,4)<<endl; //creating substring
   string s = "84733";
   int x = stoi(s);
   cout<<x<<endl;

   sort(s1.begin(),s1.end());
   cout<<s1<<endl;
    

    return 0;
}