//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

#define ll long long
class Solution {
  public:
    vector<int> getDistinctDifference(int n, vector<int> &a) {
        unordered_map<ll,ll>mp,np;
        vector<int>v;
        vector<int>u(n);
        for(ll i=0;i<n;i++)
        {
          v.push_back(mp.size());
          mp[a[i]]++;
        }
        for(ll i=n-1;i>=0;i--)
        {
          u[i]=np.size();
          np[a[i]]++;
        }
        for(ll i=0;i<n;i++)
        v[i]=v[i]-u[i];
        return v;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends