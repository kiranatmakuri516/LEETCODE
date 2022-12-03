//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int>a) {
      int i,j,l,m,p,q,r,s,t,u,v;
      sort(a.begin(),a.end());
      p=a[0];
      q=a[n-1];
      int low,high,mid;
      low=1;
      high=abs(q-p);
      u=1;
      while(low<=high)
      {
          mid=(low+high)/2;
          //cout<<mid<<" ";
          r=a[0];
          //cout<<mid<<endl;
          v=1;
          for(i=1;i<n;i++)
          {
              //cout<<r<<" ";
            if(r+mid<=a[i])
            {
                r=a[i];
                v++;
            }
            if(v==k)
            {
                u=max(mid,u);
                break;
            }
          }
          //cout<<endl;
          if(v==k)
          {
              low=mid+1;
          }
          else
          high=mid-1;
      }
      return u;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends