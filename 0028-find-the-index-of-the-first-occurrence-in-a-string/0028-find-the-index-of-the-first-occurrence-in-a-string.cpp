class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int n=haystack.length();
        int a=needle.length();
        if(a>n)
        {
            return -1;
        }
        for(int i=0;i<=n-a;i++)
        {
            int j;
            for(j=0;j<a;j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    break;
                }
            }
            if(j==a)
            {
                return i;
            }
        }
        return -1;
    }
};