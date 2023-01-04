//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        unordered_map<string,int>mp;
        int i,j,k,l,m,n,p,q,r,s,t,u,v;
        n=words.size();
        for(i=0;i<n;i++)
        mp[words[i]]++;
        string a="";
        p=0;
        for(i=0;i<n;i++)
        {
            string b="";
            for(j=0;j<words[i].size();j++)
            {
              b+=words[i][j];
              if(mp[b]<1)
              break;
            }
            if(j>=words[i].size())
            {
               if(j>p)
               {
                   p=j;
                   a=words[i];
               }
               else if(j==p)
               {
                   if(a>words[i])
                   a=words[i];
               }
            }
        }
        // string c="";
        // for(i=0;i<p;i++)
        // {
        //   c+=a[i];
        //   cout<<c<<" "<<mp[c]<<endl;
        // }
        return a;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends