//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends




class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>nums)
	{
	  vector<pair<int,int>>ans;
	  int i,j,k,l,m,n,p,q,r,s,t,c=0;
	  n=nums.size();
	  for(i=0;i<n;i++)
	  {
	      ans.push_back({nums[i],i});
	  }
	  sort(ans.begin(),ans.end());
	  for(i=0;i<n;i++)
	  {
	      if(ans[i].second==i)
	      continue;
	      else
	      {
	          c++;
	          swap(ans[i],ans[ans[i].second]);
	          i--;
	      }
	  }
// 	  for(auto i:ans)
// 	  cout<<i.first<<" "<<i.second<<"\n";
	  return c;
	  
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
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends