//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

#define ll long long
class Solution {
  public:
    int unvisitedLeaves(int n, int k, int a[]) {
      ll i,j,l,m,q;
      unordered_map<ll,ll>mp;
      for(i=0;i<n;i++)
      mp[a[i]]++;
      ll b[k+1]={0};
      for(auto i:mp)
      {
          m=i.first;
          q=i.first;
          while(m<=k)
          {
              b[m]++;
              m=m+q;
          }
      }
      m=0;
      for(i=1;i<=k;i++)
      {
          if(b[i]==0) m++;
      }
      return m;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends