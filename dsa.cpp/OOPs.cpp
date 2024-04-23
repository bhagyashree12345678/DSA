#include<iostream>
#include<string>

using namespace std;

class laptop()
{
    string name;
    string brand;
    float price;
    string processor;

    void getdata()
    {
        cout<<"Name";
        cin>>name;
        cout<<"Brand";
        cin>>brand;
        cout<<"Price";
        cin>>price;
        cout<<"Processor";
        cin>>processor;
    }

    void showdata()
    {
        cout<<name<<brand<<price<<processor;
    }

    void shutdown()
    {
        cout<<name<<" has shutting down";
    }
}

int main()
{
    laptop laptop1;
    laptop1.getdata();
    laptop1.showdata();

    return 0;
}