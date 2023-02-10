//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string a){
      unordered_map<char,int>mp,np;
      np['b']=1;
      np['a']=1;
      np['l']=2;
      np['o']=2;
      np['n']=1;
      long long int i,j,k,l,m,n,p,q,r,t,u;
      n=a.size();
      for(i=0;i<n;i++)
      mp[a[i]]++;
      for(auto i:mp)
      {
          if(np[i.first]>0)
          {
          mp[i.first]=(i.second/np[i.first]);
          //cout<<i.first<<" "<<i.second<<endl;
          }
      }
      p=1000000;
      for(auto i:mp)
      {
          if(np[i.first]>0)
          {
              q=i.second;
              p=min(p,q);
          }
      }
      return p;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends