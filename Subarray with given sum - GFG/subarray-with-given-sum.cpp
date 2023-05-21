//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
      vector<int>v;
      int i,j,k,l,m,p,q,r,t,u;
      i=j=p=0;
      if(s==0){
          v.push_back(-1);
          return v;
      }
      while(j<n)
      {
          p+=arr[j];
          if(p>s)
          {
              while(p>s)
              {
                  p-=arr[i];
                  i++;
              }
          }
          if(p==s)
          {
              v.push_back(i+1);
              v.push_back(j+1);
              return v;
          }
          j++;
      }
      v.push_back(-1);
      return v;
    }
};


//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends