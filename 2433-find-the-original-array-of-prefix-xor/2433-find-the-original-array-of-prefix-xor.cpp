class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
      vector<int>v;
      int i,j,n,k;
        n=pref.size();
        j=0;
        for(i=0;i<n;i++)
        {
           k=j^pref[i];
            v.push_back(k);
            j=j^k;
        }
        return v;
    }
};