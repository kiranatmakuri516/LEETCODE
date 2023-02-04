//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *nums, int n) {
	  int i,j,k,l,m;
      vector<int>v(n);
      v[0]=nums[0];
      if(n==1)
      return nums[0];
      if(n==2)
      return max(nums[0],nums[1]);
      v[1]=max(nums[0],nums[1]);
      for(i=2;i<n;i++)
      v[i]=max(v[i-2]+nums[i],v[i-1]);
      return v[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends