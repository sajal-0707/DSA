class Solution {
public:
    int countDigits(int num) 
    {
        int c=0,tem=num;
        while(tem!=0)
        {
            int a=tem%10;
            tem/=10;
            if(num%a==0)
            {
                c++;
            }
            else{
                continue;
            }
        }
        return c;
    }
};