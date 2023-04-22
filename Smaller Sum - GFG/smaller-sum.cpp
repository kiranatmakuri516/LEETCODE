//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

#define ll long long 
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int>a){
        map<ll,ll>mp,np;
        ll i,j,p;
        vector<ll>v;
        for(i=0;i<n;i++)
        mp[a[i]]+=a[i]; 
        p=0;
        for(auto i:mp)
        {
          np[i.first]=p;
          p+=i.second;
        }
        for(i=0;i<n;i++)
        v.push_back(np[a[i]]);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends