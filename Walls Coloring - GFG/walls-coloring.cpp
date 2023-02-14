//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> c, int n) {
        int i;
        for(i=1;i<n;i++)
        {
           c[i][0]+=min(c[i-1][1],c[i-1][2]);
           c[i][1]+=min(c[i-1][0],c[i-1][2]);
           c[i][2]+=min(c[i-1][0],c[i-1][1]);
        }
        i=n-1;
        return min(c[i][0],min(c[i][1],c[i][2]));
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends