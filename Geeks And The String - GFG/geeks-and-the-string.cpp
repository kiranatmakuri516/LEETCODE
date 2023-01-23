//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        stack<char>st;
        int i,j,k,l,m,n,p,q;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(st.size()==0)
            st.push(s[i]);
            else if(st.top()==s[i])
            st.pop();
            else
            st.push(s[i]);
        }
        if(st.size()==0)
        return "-1";
        string a="";
        while(st.size())
        {
            a+=st.top();
            st.pop();
        }
        string b=a;
        reverse(b.begin(),b.end());
        return b;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends