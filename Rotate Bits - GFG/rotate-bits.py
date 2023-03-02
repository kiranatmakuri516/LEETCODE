#User function Template for python3

class Solution:
    def rotate(self, n, d):
        k='{0:016b}'.format(n)
        l=[]
        d=d%16;
        a=k[d:16]
        for i in range(0,d):
            a+=k[i]
        l.append(int(a,2))
        a=""
        a=k[16-d:16]
        for i in range(0,16-d):
            a+=k[i]
        l.append(int(a,2))
        return l
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, d = input().strip().split(" ")
        n, d = int(n), int(d)
        ob = Solution()
        ans = ob.rotate(n, d)
        print(ans[0])
        print(ans[1])
# } Driver Code Ends