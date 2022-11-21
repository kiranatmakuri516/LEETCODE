//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void fun(vector<vector<int>> &ans,vector<int>v,int n,int k)
	{
	    if(k<=0)
	    return ;
	    if(n==0)
	    {
	        sort(v.begin(),v.end(),greater<int>());
	        ans.push_back(v);
	        return ;
	    }
	    if(n-k>=0)
	    {
	        v.push_back(k);
	        fun(ans,v,n-k,k);
	        v.pop_back();
	    }
	    fun(ans,v,n,k-1);
	}
    vector<vector<int>> UniquePartitions(int n) {
       vector<vector<int>>ans;
       vector<int>v;
       int i;
       fun(ans,v,n,n);
       return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends