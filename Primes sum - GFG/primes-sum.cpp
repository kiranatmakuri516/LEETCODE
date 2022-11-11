//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int n){
        map<int,int>mp;
        int i,j,k,l,m;
        int a[n+1]={0};
        for(i=2;i*i<=n;i++)
        {
            if(a[i]==0)
            {
                for(j=i*i;j<=n;j=j+i)
                a[j]=1;
            }
        }
        for(i=2;i<=n;i++)
        {
            if(a[i]==0)
            {
                //cout<<i<<" ";
                mp[i]++;
                k=n-i;
                if(mp[k]>0)
                return "Yes";
            }
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends