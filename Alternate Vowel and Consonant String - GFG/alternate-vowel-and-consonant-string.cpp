//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string s, int n)
    {
      string a="",b="";
      int i,j,k,l,m,p,q;
      unordered_map<char,int>mp;
      for(i=0;i<n;i++)
      {
          mp[s[i]]++;
      }
      for(char v='a';v<='z';v++)
      {
        if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u')
        {
          for(i=0;i<mp[v];i++)
          a+=v;
        }
        else
        {
          for(i=0;i<mp[v];i++)
          b+=v;  
        }
      }
      m=a.size();
      n=b.size();
      if(abs(m-n)>1)
      return "-1";
      string c="",d="";
      p=q=0;
      if(m>n)
      {
          for(i=0;i<n;i++)
          {
              c+=a[i];
              c+=b[i];
          }
          c+=a[i];
          return c;
      }
      else if(m<n)
      {
          for(i=0;i<m;i++)
          {
              c+=b[i];
              c+=a[i];
          }
          c+=b[i];
          return c;
      }
      else
      {
        if(a[0]<b[0])
        {
            for(i=0;i<n;i++)
            {
                c+=a[i];
                c+=b[i];
            }
            return c;
        }
        else
        {
           for(i=0;i<n;i++)
            {
                c+=b[i];
                c+=a[i];
            }
            return c; 
        }
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
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends