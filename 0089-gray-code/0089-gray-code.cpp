class Solution {
public:
    vector<int> grayCode(int n) {
       int i,j,k,l,m;
       m=pow(2,n);
        vector<int>v;
       for(i=0;i<m;i++)
       {
           k=i^(i>>1);
        v.push_back(k);
       }
        return v;
    }
};