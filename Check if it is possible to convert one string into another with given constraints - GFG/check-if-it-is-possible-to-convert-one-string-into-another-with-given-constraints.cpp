//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string s, string t, int m, int n) {
       vector<char>u,v;
       int i,j,k,l,p,q,x,y;
       p=q=x=y=0;
       if(m!=n)
       return 0;
       for(i=0;i<m;i++)
       {
           if(s[i]!='#')
           u.push_back(s[i]);
           if(s[i]=='A')
           p=i;
           if(s[i]=='B')
           q=i;
       }
      for(i=0;i<n;i++)
       {
           if(t[i]!='#')
           v.push_back(t[i]);
           if(t[i]=='A')
           x=i;
           if(t[i]=='B')
           y=i;
       }
       if(u==v)
       {
         if(p>=x && q<=y)
         return 1;
         else
         return 0;
       }
       return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends