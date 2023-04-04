//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string a) {
    int i,j,k,l,m,n,p,q,r,s,t,u,v,x,y,z;
    p=q=0;
    n=a.size();
    for(i=0;i<n-1;i++)
    {
      if(a[i]!=a[i+1])
      {
          if(a[i]=='a') p++;
          else q++;
      }
    }
    if(a[i]=='a') p++;
    else q++;
    return min({p,q})+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends