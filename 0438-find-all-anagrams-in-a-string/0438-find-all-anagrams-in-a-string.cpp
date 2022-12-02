class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     int i,j,k,l,m,n,q,r,t,u,x,y,z;
     map<char,int>mp,np;
     m=s.size();
     n=p.size();
     vector<int>v;
     for(i=0;i<n;i++)
         np[p[i]]++;
     for(i=0;i<n;i++)
         mp[s[i]]++;
     if(mp==np)
         v.push_back(0);
     u=0;
     for(i=n;i<m;i++)
     {
       mp[s[u]]--;
       if(mp[s[u]]==0)
           mp.erase(s[u]);
         u++;
         mp[s[i]]++;
         if(mp==np)
             v.push_back(u);
     }
        return v;
    }
};