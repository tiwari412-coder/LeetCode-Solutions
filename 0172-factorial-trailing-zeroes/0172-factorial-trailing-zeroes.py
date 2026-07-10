class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        fact=1 
        
        for i in range(1,n+1):
            fact*=i
        
        c=fact
        d=str(c)

        c=len(d)-len(d.strip('0'))
        return c
    
            
        