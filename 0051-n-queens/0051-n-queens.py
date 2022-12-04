class Solution:
    def fun(self,x,n,l,kir):
        if(x==n):
            return 1
        for i in range(0,n):
            l[x]=i
            p=Solution()
            if(self.check(x,l)):
                if(p.fun(x+1,n,l,kir)):
                    v=list()
                    for k in range(0,n):
                        ans=""
                        for u in range(0,n):
                            if(l[k]==u):
                                ans+='Q'
                            else:
                                ans+='.'
                        v.append(ans)
                    kir.append(v)
                    
        return 0

    def solveNQueens(self, n: int) -> List[List[str]]:
        l=list()
        for i in range(0,n):
            l.append(0)
        x=0
        p=Solution();
        kir=list()
        k=p.fun(x,n,l,kir)
        return kir
        
    
    def check(self,x,l):
        for i in range(0,x):
            if(l[i]==l[x]):
                return 0
            if(abs(i-x)==abs(l[i]-l[x])):
                return 0
        return 1