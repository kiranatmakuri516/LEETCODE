//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        int p,q,r,i;
        p=1;
        q=2;
        if(n==1) return p;
        if(n==2) return q;
        for(i=3;i<=n;i++)
        {
            r=p+q;
            r=r%1000000007;
            p=q;
            q=r;
        }
        return r;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends