//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> a, int n) {
	    long long int i,p,q;
	    p=1;
	    q=a[0];
	    for(i=0;i<n;i++)
	    {
	        p*=a[i];
	        q=max(q,p);
	        if(a[i]==0) p=1;
	    }
	    p=1;
	    for(i=n-1;i>=0;i--)
	    {
	        p*=a[i];
	        q=max(q,p);
	        if(a[i]==0) p=1;
	    }
	    return q;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends