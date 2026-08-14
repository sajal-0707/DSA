class Solution {//first take unordered set
public:
    bool isHappy(int n)
    {
        unordered_set<int> s;
        int a=0;
        while(n!=0 && s.find(n)==s.end())
        {
            s.insert(n);
            int b=0;
            while(n!=0)
            {
                a=n%10;
                n/=10;
                b+=a*a;
            }
            n=b;
            if (n==1)
            {
                return true;
            }
        }
        return false;
    }
};