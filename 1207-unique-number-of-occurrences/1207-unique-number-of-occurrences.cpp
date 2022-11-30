class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int>mp;
        unordered_map<int,int>np;
      int i,j,k,l,m,n;
      n=arr.size();
      for(i=0;i<n;i++)
          mp[arr[i]]++;
      for(auto i:mp)
      {
          np[i.second]++;
          if(np[i.second]>1)
              return 0;
      }
        return 1;
    }
};