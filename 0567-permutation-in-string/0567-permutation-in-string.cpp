class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       map<char,int>mp,np;
       int i,j,k,l,m,n,p,q,r,s,t;
       m=s1.size();
       n=s2.size();
       if(m>n)
           return 0;
       for(i=0;i<m;i++)
           mp[s1[i]]++;
       for(i=0;i<m;i++)
           np[s2[i]]++;
        p=0;
        if(mp==np)
            return 1;
        for(i=m;i<n;i++)
        {
            np[s2[i]]++;
            np[s2[p]]--;
            if(np[s2[p]]==0)
                np.erase(s2[p]);
            p++;
            if(mp==np)
                return 1;
        }
        if(mp==np)
            return 1;
        return 0;
    } 
};