class Solution {
public:
    int wateringPlants(vector<int>& a, int c) {
      int i,j,k,l,m,n,p,q;
      n=a.size();
      m=c;
      p=1;
      c-=a[0];
      for(i=1;i<n;i++)
      {
        cout<<p<<" ";
        if(c>=a[i])
        {
            p++;
            c-=a[i];
        }
        else
        {
            p+=2*(i)+1;
            c=m;
            c-=a[i];
        }
      }
       return p;
    }
};