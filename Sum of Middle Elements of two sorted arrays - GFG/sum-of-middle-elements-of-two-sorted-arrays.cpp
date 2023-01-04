//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int arr[], int arr1[], int n) {
        int i,j,k,l,m,p,q,r,s,t,u,v;
        p=0;
        q=0;
        k=0;
        l=0;
        r=0;
        if(n==1)
        return arr[0]+arr1[0];
        while(p<n && q<n)
        {
            if(arr[p]<arr1[q])
            {
                u=arr[p];
                k++;
                p++;
            }
            else
            {
                u=arr1[q];
                k++;
                q++;
            }
            if(k==n||k==n+1)
            r+=u;
            if(k>n+1)
            break;
        }
        while(p<n)
        {
            u=arr[p++];
            k++;
            if(k==n||k==n+1)
            r+=u;
            if(k>n+1)
            break;
        }
        while(q<n)
        {
            u=arr1[q++];
            k++;
            if(k==n||k==n+1)
            r+=u;
            if(k>n+1)
            break;
        }
        return r;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends