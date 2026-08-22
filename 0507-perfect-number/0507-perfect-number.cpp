class Solution {
public:
    bool checkPerfectNumber(int num)
    {
        if(num <= 1) return false;
        int temp = 1;
        for(int i = 2; (long long)i * i <= num; i++)
        {
            if(num % i == 0)
            {
                temp += i;
                if(i != num / i)
                {
                    temp += num / i;
                }
            }
        }
        return temp == num;
    }
};