//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        int i,j,k,l,m,n,p,q,r,s,t,u,v;
        string vin=""; 
        p=0;
        while(b)
        {
            p+=b%2;
            b=b/2;
        }
        q=log2(a)+1;
        if(q>=p)
        {
            string kir="";
            while(a)
            {
                if(a%2==0)
                kir+='0';
                else
                kir+='1';
                a=a/2;
            }
            n=kir.size();
            for(i=n-1;i>=0;i--)
            {
               if(p>0)
               {
                   if(kir[i]=='1')
                   {
                       vin+='1';
                       p--;
                   }
                   else
                   vin+=kir[i];
               }
               else
               vin+='0';
            }
            if(p>0)
            {
                for(i=n-1;i>=0;i--)
                {
                    if(vin[i]=='0' && p>0){
                    vin[i]='1';
                    p--;
                    }
                }
            }
        }
        else
        {
            return pow(2,p)-1;
        }
        u=0;
        //cout<<vin<<" ";
        for(i=0;i<n;i++)
        {
            if(vin[i]=='1')
            u=u*2+1;
            else
            u=u*2;
        }
        return u;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends