//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        long long int i,j,k,l,m,p,q;
        string c="-1";
        for(i=0;i<10000;i++)
        {
          if(i<arr[0].size())
          {
            char d=arr[0][i];
            for(j=1;j<n;j++)
            {
                if(i>=arr[j].size())
                break;
                if(arr[j][i]!=d)
                break;
            }
            if(j<n)
            return c;
            else
            {
            if(c=="-1")
            c=d;
            else
            c+=d;
            }
          }
          else
          {
              return c;
              break;
          }
         // cout<<c<<endl;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends