//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        unordered_map<int,int>mp;
        int i,p,q,r;
        p=0;
        for(i=0;i<k;i++)
        mp[a[i]]++;
        vector<int>v;
        v.push_back(mp.size());
        for(i=k;i<n;i++)
        {
            mp[a[p]]--;
            if(mp[a[p]]==0) mp.erase(a[p]);
            p++;
            mp[a[i]]++;
            v.push_back(mp.size());
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends