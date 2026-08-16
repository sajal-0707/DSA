class Solution {
public:
    int addDigits(int num)
    {
        while (num >= 10)
        {
            int b = 0;
            while (num > 0)
            {
                b += num % 10;
                num /= 10;
            }
            num = b;
        }
        return num;
    }
};