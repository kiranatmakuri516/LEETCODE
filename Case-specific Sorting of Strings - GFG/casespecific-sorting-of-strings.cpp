//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
       string a="",b="";
       int i,p,q;
       for(i=0;i<n;i++)
       {
           if(str[i]>='A' && str[i]<='Z')
           a+=str[i];
           else
           b+=str[i];
       }
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       p=0;
       q=0;
       for(i=0;i<n;i++)
       {
          if(str[i]>='A' && str[i]<='Z')
          str[i]=a[p++];
          else
          str[i]=b[q++];
       }
       return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends