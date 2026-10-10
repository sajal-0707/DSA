class Solution {
public:
    int arrangeCoins(int n)
    {
        int s=0;
        for(int i=1 ; i<=n ; i++)
        {
            n-=i;
            s++;
        }
        return s;
    }
};