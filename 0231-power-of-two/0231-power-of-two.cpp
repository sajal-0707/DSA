class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        long long x = 1;
        for (int i = 0; i < 31; i++)
        {
            if (x == n)
            {
                return true;
            }
            x *= 2;
        }
        return false;
    }
};