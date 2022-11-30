class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int>mp;
      int i,j,l,m,p,q,r,s,t,n;
      n=nums.size();
      for(i=0;i<n;i++)
          mp[nums[i]]++;
      map<int,vector<int>,greater<int>>np;
      for(auto i:mp)
          np[i.second].push_back(i.first);
      vector<int>v;
        p=0;
      for(auto i:np)
      {
         for(auto j:np[i.first])
         {
             if(p<k)
             {
             v.push_back(j);
              p++;
             }
             else if(p==k)
             {
               return v;  
             }
         }
      }
        return v;
    }
};