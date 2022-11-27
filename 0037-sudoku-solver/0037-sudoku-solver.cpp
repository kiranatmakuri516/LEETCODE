class Solution {
public:
bool check(vector<vector<char>>& b,int i,int j,char k)
{
    int p,q,r,s,u,v;
        for(p=0;p<9;p++)
        {
            if(b[i][p]==k)
                return 0;
            if(b[p][j]==k)
                return 0;
        }
        p=i/3;
        q=j/3;
        p=p*3;
        q=q*3;
        for(u=p;u<p+3;u++)
        {
            for(v=q;v<q+3;v++)
            {
                if(b[u][v]==k)
                    return 0;
            }
        }
        return 1;
        
}
bool fun(vector<vector<char>>& b)
{
        int i,j,k,l,m,n;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                if(b[i][j]=='.')
                {
                    char kir;
                    for(kir='1';kir<='9';kir++)
                    {
                       if(check(b,i,j,kir))
                       {
                           b[i][j]=kir;
                           if(fun(b))
                               return 1;
                           else
                             b[i][j]='.';
                       }
                    }
                    return 0;
                }
            }
        }
        return 1;
}
void solveSudoku(vector<vector<char>>& board) {
       fun(board); 
    }
};