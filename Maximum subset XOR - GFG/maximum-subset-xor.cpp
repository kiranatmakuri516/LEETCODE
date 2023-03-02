//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return maximum XOR subset in set[]

class Solution
{
    public:
    int maxSubsetXOR(int arr[], int n)
    {
      if(n==0)
      return 0;
      int p=0;
      int kir=*max_element(arr,arr+n);
      if(kir==0) return 0;
      while(1)
      {
        p=max(p,p^kir);
        kir=*max_element(arr,arr+n);
        if(!kir) return p;
        for(int i=0;i<n;i++)
        arr[i]=min(arr[i],arr[i]^kir);
      }
      return p;
    }
};

//{ Driver Code Starts.
int main()
{

    int t,n,a[100004],k;
    scanf("%d",&t);
    while(t--)
    {
        //cin>>n;
       scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        Solution obj;
        printf("%d\n",obj.maxSubsetXOR(a,n));
       // cout<<bin(a,0,n-1,k)<<endl;
    }
}
// } Driver Code Ends