class Solution {
public:
    string convert(string s, int num) {
        int i,j,p,q,l,n;
        n=s.size();
     vector<vector<char>>v(num);
     for(i=0;i<num;i++)
     {
      if(i<n)
     v[i].push_back(s[i]);
     }
     p=0;
     q=i;
     while(q<n)
     {
         if(p==0)
         {
             for(i=num-2;i>0;i--)
             {
                 if(q<n)
                  v[i].push_back(s[q]);
                 else
                     break;
                 q++;
             }
             p=1;
         }
         else
         {
             for(i=0;i<num;i++)
             {
                 if(q<n)
                     v[i].push_back(s[q]);
                 else
                     break;
                 q++;
             }
             p=0;
         }
     }
        string a="";
        for(i=0;i<num;i++)
        {
            l=v[i].size();
            for(j=0;j<l;j++)
            {
                a+=v[i][j];
                //cout<<v[i][j]<<" ";
            }
            //cout<<endl;
        }
        return a;
    }
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
};