#include<iostream>
using namespace std;

int main()
{
    int num,count=0,res=0,rem,mul=1,q,cnt;
    cin>>num;
    q=num;
    while(q!=0)
    {
        q=q/10;
        count++;   
    }
    
    cnt=count;
    q=num;
    while(q!=0)
    {
        rem = q%10;
        while(cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
        res = res+mul;
        cnt=count;
        q=q/10;
        mul=1;
        
    }
    
    if(res == num){
       cout<<"yes";
    }else{
       cout<<"no";   
    }
}



