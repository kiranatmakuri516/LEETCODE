//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define ll long long
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
      ll i,j,k,l,m,p,q,r,s,t,u,v,x,y,z;
      stack<pair<ll,ll>>sp;
      for(i=0;i<n;i++)
      {
          if(sp.size()==0)
          sp.push({arr[i],i});
          else if(sp.top().first>=arr[i])
          sp.push({arr[i],i});
          else
          {
              while(sp.size() && sp.top().first<arr[i])
              {
                  arr[sp.top().second]=arr[i];
                  sp.pop();
              }
              sp.push({arr[i],i});
          }
      }
      while(sp.size())
      {
          arr[sp.top().second]=-1;
          sp.pop();
      }
      return arr;
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
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends