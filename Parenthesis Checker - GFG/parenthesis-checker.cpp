//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string a)
    {
        vector<char>v;
        int i,j,k,l,m,n;
        n=a.size();
        for(i=0;i<n;i++)
        {
            if(a[i]=='(' || a[i]=='[' || a[i]=='{')
            v.push_back(a[i]);
            else if(a[i]==']')
            {
                l=v.size();
                if(l==0)
                return 0;
                if(v[l-1]=='[')
                v.pop_back();
                else
                return 0;
            }
            else if(a[i]==')')
            {
                l=v.size();
                if(l==0)
                return 0;
                if(v[l-1]=='(')
                v.pop_back();
                else
                return 0;
            }
            else if(a[i]=='}')
            {
                l=v.size();
                if(l==0)
                return 0;
                if(v[l-1]=='{')
                v.pop_back();
                else
                return 0;
            }
        }
        if(v.size()==0)
        return 1;
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends