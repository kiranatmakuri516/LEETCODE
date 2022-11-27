//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string a, string b)
	{
	    long long int i,j,k,l,m,n,p,q,r,s,t,u,v,x,y,z;
	    m=a.size();
	    n=b.size();
	    m--;
	    n--;
	    string d="";
	    char c='0';
	    while(m>=0 && n>=0)
	    {
	        if(a[m]=='1' && b[n]=='1')
	        {
	            if(c=='0')
	            {
	              d+='0';
	              c='1';
	            }
	            else
	            {
	                d+='1';
	                c='1';
	            }
	        }
	        else if(a[m]=='1' || b[n]=='1')
	        {
	            if(c=='0')
	            {
	                d+='1';
	            }
	            else
	            {
	                d+='0';
	                c='1';
	            }
	        }
	        else
	        {
	            if(c=='0')
	            {
	                d+='0';
	            }
	            else
	            {
	                d+='1';
	                c='0';
	            }
	        }
	        m--;
	        n--;
	    }
	    while(m>=0)
	    {
	        if(a[m]=='1')
	        {
	            if(c=='0')
	            d+='1';
	            else
	            {
	                d+='0';
	                c='1';
	            }
	        }
	        else
	        {
	            if(c=='0')
	            d+='0';
	            else
	            {
	                d+='1';
	                c='0';
	            }
	        }
	        m--;
	    }
	    while(n>=0)
	    {
	        if(b[n]=='1')
	        {
	            if(c=='0')
	            d+='1';
	            else
	            {
	                d+='0';
	                c='1';
	            }
	        }
	        else
	        {
	            if(c=='0')
	            d+='0';
	            else
	            {
	                d+='1';
	                c='0';
	            }
	        }
	        n--;
	    }
	    if(c=='1')
	    {
	    d+='1';
	    reverse(d.begin(),d.end());
	    return d;
	    }
	    else
	    {
	        reverse(d.begin(),d.end());
	        string kir="";
	        i=0;
	        n=d.size();
	        while(d[i]=='0' && i<n)
	        i++;
	        for(k=i;k<n;k++)
	        kir+=d[k];
	        return kir;
	    }
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends