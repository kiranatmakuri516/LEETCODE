class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int i,j,k,l,m,n,p,q;
        n=nums.size();
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        v.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            vector<int>vv;
            for(i=0;i<nums.size();i++)
                vv.push_back(nums[i]);
            v.push_back(vv);
        }
        return v;
    }
};