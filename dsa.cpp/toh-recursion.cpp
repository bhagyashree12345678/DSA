#include<iostream>

using namespace std;

void towerofHonoi(int n ,char src, char  dest, char  helper){
    if (n==0)//base case
    {
       return;
    }

    towerofHonoi(n-1,src,helper,helper);
    cout<<"Move from "<<src<<"  To  "<<dest<<endl;
    towerofHonoi(n-1,helper,dest,src);
    
}

int main(){

    towerofHonoi(4,'A','C','B');

    return 0;
}