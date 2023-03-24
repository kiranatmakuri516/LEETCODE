//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> a, int n, vector<int> b, int m) 
    {
       map<int,int>mp;
       unordered_map<int,int>np,qp;
       int p=1;
       for(int i=0;i<m;i++)
       {
           if(qp[b[i]]==0)
           {
               mp[p++]=b[i];
               qp[b[i]]++;
           }
       }
       for(int i=0;i<n;i++)
          np[a[i]]++;
       qp.clear();
       for(int i=0;i<m;i++)
       qp[b[i]]++;
       vector<int>u,v;
       for(auto i:mp)
       {
           for(int j=0;j<np[i.second];j++)
           {
              v.push_back(i.second);
           }
       }
       for(int i=0;i<n;i++)
       {
           if(qp[a[i]]==0) u.push_back(a[i]);
       }
       sort(u.begin(),u.end());
       for(auto i:u) v.push_back(i);
       return v;
    } 
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends