class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """

        if(n==0):
            return 0
        elif(n==1):
            return 1

        s=0
        f=1        
        sum=0

        for i in range(2,n+1):
            sum=s+f
            s=f
            f=sum   
            
        return sum