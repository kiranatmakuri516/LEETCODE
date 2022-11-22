//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    int i,j,k,l,m,n,p,q;
	    n=nums.size();
	    unordered_map<int,int>mp;
	    unordered_map<int,vector<int>>qp;
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(nums[i]<nums[j])
	            {
	            mp[i]++;
	            qp[i].push_back(j);
	            }
	        }
	    }
	    p=0;
	    for(i=0;i<n;i++)
	    {
	        if(mp[i]!=0)
	        {
	            q=0;
	            m=qp[i].size();
	            for(j=0;j<m;j++)
	            q+=mp[qp[i][j]];
	            p+=q;
	        }
	    }
	    return p;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends