class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int i,j,k,l,m,n,p,q,r,s,t,u,v;
      n=nums.size();
      map<int,int>mp;
      for(i=0;i<n;i++)
      {
          mp[nums[i]]++;
      }
      p=q=r=u=0;
      for(auto i:mp)
      {
         if(p==0)
         {
             q=i.first;
             r=1;
             p++;
         } 
         else{
             if(i.first-q==1)
             {
               r++;  
             }
             else
             {
                 u=max(u,r);
                 r=1;
             }
         }
          q=i.first;
          cout<<r<<" ";
      }
        u=max(u,r);
        return u;
    }
};