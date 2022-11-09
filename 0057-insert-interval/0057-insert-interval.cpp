class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
       map<int,int>mp;
       vector<vector<int>>ans;
       int i,j,k,l,m,n,p,q,r,s,t,u,v,x,y,z;
       n=a.size();
       for(i=0;i<n;i++)
       {
           p=a[i][0];
           q=a[i][1];
           mp[p]=q;
       }
       p=q=r=0;
       u=b[0];
       v=b[1];
        s=t=0;
       for(auto i:mp)
       {
         if(p==0)
         {
             if(u>=i.first && u<=i.second)
             {
                 s=min(i.first,u);
                 t=max(i.second,v);
                 p++;
                 mp[i.first]=516;
                 r++;
             }
             else if(v>=i.first && v<=i.second)
             {
                 s=min(i.first,u);
                 t=max(i.second,v);
                 p++;
                 mp[i.first]=516;
                 r++;
             }
             else if(i.first>=u && i.first<=v)
             {
                 s=min(i.first,u);
                 t=max(i.second,v);
                 p++;
                 mp[i.first]=516;
                 r++;
             }
             else if(i.second>=u && i.second<=v)
             {
                 s=min(i.first,u);
                 t=max(i.second,v);
                 p++;
                 mp[i.first]=516;
                 r++;
             }
         }
         else if(p==1)
         {
             if(i.first>= s && i.first<=t)
             {
                s=min(i.first,s);
                t=max(i.second,t);
                mp[i.first]=516;
                r++;
             }
             else if(i.second>=s && i.second<=t)
             {
                s=min(i.first,s);
                t=max(i.second,t);
                mp[i.first]=516;
                r++; 
             }
         } 
       }
       if(r>0)
       {
           mp[s]=t;
       }
       else if(r==0)
       {
           mp[u]=v;
       }
        for(auto i:mp)
        {
            if(i.second!=516){
            vector<int>kir;
            kir.push_back(i.first);
            kir.push_back(i.second);
            ans.push_back(kir);
            }
        }
        return ans;
    }
};