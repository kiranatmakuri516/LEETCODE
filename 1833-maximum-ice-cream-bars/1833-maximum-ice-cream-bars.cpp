class Solution {
public:
    int maxIceCream(vector<int>c, int k) {
      sort(c.begin(),c.end());  
        int i,j,n;
        n=c.size();
        j=0;
        for(i=0;i<n;i++)
        {
          if(c[i]>k)
              return j;
            else
            {
                k=k-c[i];
                j++;
            }
        }
        return j;
    }
};