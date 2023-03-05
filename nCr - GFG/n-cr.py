#User function Template for python

import math

class Solution:
    def nCr(self, n, r):
        if(n<r): return 0
        k=math.factorial(n) // (math.factorial(r) * math.factorial(n-r))
        k=k%1000000007
        return k
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, r = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.nCr(n, r))
# } Driver Code Ends