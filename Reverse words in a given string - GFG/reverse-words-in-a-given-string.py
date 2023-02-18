# User function Template for python3

class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,s):
        l=s.split(".")
        l.reverse()
        a=""
        for i in range(0,len(l)):
            if(i!=len(l)-1):
                a+=l[i]
                a+="."
            else:
                a+=l[i]
        return a
            


#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        obj = Solution()
        print(obj.reverseWords(s))

# } Driver Code Ends