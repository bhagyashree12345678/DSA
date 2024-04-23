#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
      vector<int> getTable(int N)
    {
        // Write Your Code here
        int ans=1;
        vector<int> result;
	    for(int i=1;i<=10;i++)
	    {
	        ans=N*i;
	        result.push_back(ans);
	    }
	    return result;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.getTable(N);
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
            cout<<"\n";
        }
        
    }
}
