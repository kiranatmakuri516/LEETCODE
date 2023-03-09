//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int>qu;
        int i,j,l,m,p,q,r,s,t,u,x,y,z;
        vector<int>v;
        p=0;
        for(i=0;i<k;i++)
        {
           while(qu.size() && qu.back()<arr[i])
            qu.pop_back();
            qu.push_back(arr[i]);
        }
        v.push_back(qu.front());
        u=0;
        for(i=k;i<n;i++)
        {
            if(arr[u]==qu.front())
            qu.pop_front();
            u++;
            while(qu.size() && qu.back()<arr[i])
            qu.pop_back();
            qu.push_back(arr[i]);
            v.push_back(qu.front());
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends