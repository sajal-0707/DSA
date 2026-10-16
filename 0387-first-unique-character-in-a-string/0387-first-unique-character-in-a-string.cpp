class Solution
{
public:
    int firstUniqChar(string s)
    {
        int a = s.size();
        for(int i = 0; i < a; i++)
        {
            bool isUnique = true;
            for(int j = 0; j < a; j++)
            {
                if(i == j)
                {
                    continue;
                }
                if(s[i] == s[j])
                {
                    isUnique = false;
                    break;
                }
            }
            if(isUnique == true)
            {
                return i;
            }
        }
        return -1;
    }
};