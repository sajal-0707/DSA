class Solution {
public:
    bool checkPerfectNumber(int num)
    {
        if(num <= 1) return false;

        int temp = 1; // 1 is always a proper divisor (for num > 1)

        for(int i = 2; (long long)i * i <= num; i++)
        {
            if(num % i == 0)
            {
                temp += i;
                if(i != num / i)   // avoid double-counting perfect squares
                {
                    temp += num / i;
                }
            }
        }

        return temp == num;
    }
};