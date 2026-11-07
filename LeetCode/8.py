class Solution(object):
    def myAtoi(self, s):
        pos, sign = 1, 0
        ans = 0
        temp = 0
        s = s.split()
        if len(s) == 0: return 0
        s = s[0]
        for i in range(len(s)):
            if s[i] == "-" and sign==0:
                pos = -1
                sign = 1
            elif s[i] == "+" and sign==0:
                pos = 1
                sign = 1
            elif s[i].isdigit():
                if int(s[i]) > 0 and temp==0:
                    temp = 1
                sign = 1
                ans += int(s[i]) * temp
                temp *= 10
            else:
                break
        a = 0
        while (ans>0):
            temp /= 10
            a += ans%10 * temp
            ans /= 10

        a = a*pos
        if a > pow(2,31)-1: return pow(2,31)-1
        if a < -1 * pow(2,31): return -1 * pow(2,31) 
        return a
