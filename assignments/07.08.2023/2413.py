class Solution(object):
    def sumOfMultiples(self, n):
        i = 1
        k = 0
        for i in range(1,n+1):
            if i%3==0 or i%5==0 or i%7==0:
                k+=i
        return k
      
        
            



        """
        :type n: int
        :rtype: int
        """