class Solution {
public:
    int minPathSum(vector<vector<int>>a) {
      int i,j,k,l,m,n,p,q;
        m=a.size();
        n=a[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j==0)
                {
                    ans[i][j]=a[i][j];
                }
                else if(i==0 && j!=0)
                {
                    ans[i][j]=a[i][j]+ans[i][j-1];
                }
                else if(j==0)
                {
                    ans[i][j]=a[i][j]+ans[i-1][j];
                }
                else
                {
                    ans[i][j]=a[i][j]+min(ans[i-1][j],ans[i][j-1]);
                }
            }
        }
        return ans[m-1][n-1];
    }
};