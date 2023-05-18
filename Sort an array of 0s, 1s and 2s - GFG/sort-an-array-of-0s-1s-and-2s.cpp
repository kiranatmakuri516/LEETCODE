//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int p,q,r,i,k;
        p=q=r=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            p++;
            else if(a[i]==1)
            q++;
            else
            r++;
        }
        k=0;
        for(i=0;i<p;i++)
        a[k++]=0;
        for(i=0;i<q;i++)
        a[k++]=1;
        for(i=0;i<r;i++)
        a[k++]=2;
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends