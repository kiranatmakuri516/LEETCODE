//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
         int count=0;

        int n=s.length();

        for(int i=0;i<n;i++)

        {

            if(s.substr(0,i+1)==s.substr(i+1,i+1))

            {

                count=i;

            }

        }

        int res=n-count;

        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends