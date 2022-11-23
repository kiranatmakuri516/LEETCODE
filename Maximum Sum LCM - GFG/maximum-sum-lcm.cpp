//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        long long int i,j,k,l,p,q;
        p=1+n;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                k=n/i;
                if(k==i)
                p+=i;
                else
                p+=i+k;
            }
        }
        return p;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.maxSumLCM(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends