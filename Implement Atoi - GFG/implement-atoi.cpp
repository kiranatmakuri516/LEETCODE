//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int p=0,r=0;
        for(int i=0;i<str.size();i++)
        {
            if(i==0)
            {
              if(str[0]=='-')
              r=516;
              else if(str[0]<58 && str[0]>=48)
              p=p*10+(str[0]-48);
              else
              return -1;
            }
            else
            {
              if(str[i]<58 && str[i]>=48)
              p=p*10+(str[i]-48);
              else
              return -1; 
            }
        }
        if(r==516)
        p=-p;
        return p;
    }
};




//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends