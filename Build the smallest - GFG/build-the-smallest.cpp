//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string a, int k)
{
  int i,j,l,m,n,p,q,r,t,u,v,x,y,z;
     n=a.size();
     p=0;
     stack<char>s;
     for(i=0;i<n;i++)
     {
         if(s.size()==0)
         {
             s.push(a[i]);
         }
         else if(s.top()<=a[i])
         {
             s.push(a[i]);
         }
         else
         {
             while(s.size() && s.top()>a[i] && k!=0)
             {
             s.pop();
             k--;
             }
             s.push(a[i]);
         }
     }
     if(k!=0)
     {
         while(k--)
         s.pop();
     }
     a="";
     while(s.size())
     {
         a=s.top()+a;
         s.pop();
     }
     i=0;
     string b="";
     while(i<a.size() && a[i]=='0')
     i++;
     if(i>=a.size())
     return "0";
     for(j=i;j<a.size();j++)
     b+=a[j];
     return b;
}