class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> lis;
        for(int i=left; i<=right; i++)
        {
            int temp=i;
            bool ok=true;
            while(temp>0)
            {
                int a=temp%10;
                temp/=10;
                if(a==0 || i%a!=0)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                lis.push_back(i);
            }
        }
        return lis;
    }
};