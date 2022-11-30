class Solution {
public:
    int minOperations(int n) {
     int i,j,k,l,m,p,q; 
     p=n/2;
     q=p*2+1;
     l=1;
        m=0;
     for(i=0;i<n;i++)
     {
         m+=abs(l-q);
         l+=2;
     }
        return m/2;
    }
};