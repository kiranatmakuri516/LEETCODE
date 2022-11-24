class Solution {
public:
    int  subarrayLCM(vector<int>& nums, int k) {
      long long int i,j,l,m,n,p,q,r,s;
      p=0;
      n=nums.size();
      for(i=0;i<n;i++)
      {
          q=nums[i];
          if(q==k)
              p++;
          for(j=i+1;j<n;j++)
          {
              q=lcm(q,nums[j]);
              if(q==k)
                  p++;
              if(q>k)
                  break;
          }
      }
        return p; 
    }
};

