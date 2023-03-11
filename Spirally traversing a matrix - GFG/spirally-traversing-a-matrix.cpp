//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> >a, int r, int c) 
    {
        int i,j,k,l,m,n,p,q,s,t,u,x,y,z;
        vector<int>v;
        int r1,r2,c1,c2;
        r1=0,c1=0;
        r2=r-1,c2=c-1;
        p=0;
        n=r*c;
        while(n)
        {
            if(p==0)
            {
              for(i=c1;n>0 && i<=c2;i++){
              v.push_back(a[r1][i]);
              n--;
              }
              r1++;
              p++;
              p=p%4;
            }
            if(p==1)
            {
                for(i=r1;n>0 && i<=r2;i++)
                {
                    v.push_back(a[i][c2]);
                    n--;
                }
                c2--;
                p++;
                p=p%4;
            }
            if(p==2)
            {
                for(i=c2;n>0 && i>=c1;i--)
                {
                    v.push_back(a[r2][i]);
                    n--;
                }
                r2--;
                p++;
                p=p%4;
            }
            if(p==3)
            {
                for(i=r2;n>0 && i>=r1;i--)
                {
                    v.push_back(a[i][c1]);
                    n--;
                }
                c1++;
                p++;
                p=p%4;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends