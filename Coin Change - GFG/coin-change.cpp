//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
long long int count(int coins[], int n, int sum) {

        // code here.
        long long int num=0;
        long long int *dp = new long long int[sum+1];
        dp[0] =1;
        
        for(int i=0;i<n;i++) {
            for(int total=1;total<=sum;total++) {
                if(total >= coins[i])
                    dp[total] += dp[total-coins[i]];
            }
        }
        
        return dp[sum];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends