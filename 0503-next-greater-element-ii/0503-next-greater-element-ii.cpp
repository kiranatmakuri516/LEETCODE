class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      int i,j,k,l,m,n,p,q,r,s,t,u,x,y,z;
      vector<int>v;
      n=nums.size();
      k=*max_element(nums.begin(),nums.end());
      for(i=0;i<n;i++)
      {
        if(nums[i]==k)
        v.push_back(-1);
        else
        {
            j=i+1;
            while(1)
            {
               if(j==n)
                   j=0;
                if(nums[j]>nums[i])
                {
                    v.push_back(nums[j]);
                    break;
                }
                j++;
            }
        }
      }
        return v;
    }
};