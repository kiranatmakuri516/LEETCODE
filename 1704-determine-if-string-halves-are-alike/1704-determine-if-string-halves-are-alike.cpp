class Solution {
public:
    bool halvesAreAlike(string s) {
     int p,i,j,q,n;
        n=s.size();
        p=q=0;
        for(i=0;i<n/2;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                p++;
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                p++;
            
        }
        for(i=n/2;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                q++;
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                q++;
            
        }
        if(p==q)
            return 1;
        return 0;
    }
};