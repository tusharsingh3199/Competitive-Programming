class Solution(object):
    def longestPalindrome(self, s):
        l1 = ""
        if s[::]==s[::-1]: return s
        for i in range(len(s)):
            for j in range(len(s)):
                pal = s[i:j+1]
                if pal[::] == pal[::-1] and i<=j:
                    if len(pal) > len(l1):
                        l1 = pal
        return l1
 
