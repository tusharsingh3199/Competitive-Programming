class Solution(object):
    def reverse(self, x):
        if x >= 0:
            st = str(x)
            st = st[::-1]
            x1 = int(st)
            if x1 >= 2**31-1:
                return 0
            return x1
        else:
            x *= -1  
            st = str(x)
            st = st[::-1]
            num = int(st)
            num *= -1
            if num <= (2**31) * (-1):
                return 0
            return num  

        
