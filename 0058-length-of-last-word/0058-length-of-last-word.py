class Solution(object):
    def lengthOfLastWord(self, s):
        s.strip()
        a=s.split()
        c=len(a)
        b=a[c-1]
        b.split()
        d=len(b)
        return d