class Solution {
public:
    bool isPerfectSquare(int num)
    {
        for(int i = 0; (long long)i * i <= num; i++)
        {
            long long x = (long long)i * i;
            if(x == num)
            {
                return true;
            }
        }
        return false;
    }
};