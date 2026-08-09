class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int n=s.length();
        int i=n-1;
        for( ; i>=0; i--)
        {
            if(s[i]==' ')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        int len=0;
        for( ; i>=0 && s[i]!=' '; i--)
        {
                len++;
        }
        return len;
    }
};