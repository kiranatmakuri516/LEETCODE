//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int n)
    {
        int i,j,k,l,m,p,q,r,s,t,u,x,y,z;
        int a[]={2000,500,200,100,50,20,10,5,2,1};
        p=0;
        k=0;
        vector<int>v;
        while(n)
        {
            q=(n/a[p]);
            for(i=0;i<q;i++)
            v.push_back(a[p]);
            n=n%a[p];
            p++;
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends