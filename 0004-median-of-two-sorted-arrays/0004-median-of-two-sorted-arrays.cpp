class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int>a;
        long long int i,j,k,l,m,n,p,q,r,s,t,u,v;
        p=0;
        q=0;
        m=nums1.size();
        n=nums2.size();
        while(p<m && q<n)
        {
            if(nums1[p]<nums2[q])
            {
                a.push_back(nums1[p]);
                p++;
            }
            else
            {
                a.push_back(nums2[q]);
                q++;
            }
        }
        while(p<m)
        {
            a.push_back(nums1[p]);
            p++;
        }
        while(q<n)
        {
            a.push_back(nums2[q]);
            q++;
        }
        r=m+n;
        if(r%2==1)
            return a[r/2];
        else
        {
            q=a[r/2]+a[(r/2)-1];
            //cout<<a[r/2]<<" "<<a[(r/2)-1]<<" ";
            double kir=(double)q/2;
            return kir;
        }
    }
};