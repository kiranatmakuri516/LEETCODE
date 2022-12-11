//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long int p,q,r,s,t,i;
        vector<int>v(n,0);
        vector<int>u(n,0);
        for(i=0;i<n;i++)
        {
            if(i==0)
            u[i]=arr[i];
            else
            u[i]=max(u[i-1],arr[i]);
        }
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1)
            v[i]=arr[i];
            else
            v[i]=max(v[i+1],arr[i]);
        }
        p=0;
        for(i=0;i<n;i++)
        {
            p+=min(u[i],v[i])-arr[i];
        }
        return p;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends