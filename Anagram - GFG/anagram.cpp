//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
      unordered_map<char,int>mp,np;
      int m,n,i;
      m=a.size();
      n=b.size();
      for(i=0;i<m;i++)
      {
          mp[a[i]]++;
      }
      for(i=0;i<n;i++)
      {
          np[b[i]]++;
      }
      if(mp.size()!=np.size())
      return 0;
      for(auto i:mp)
      {
          if(i.second!=np[i.first])
          return 0;
      }
      return 1;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends