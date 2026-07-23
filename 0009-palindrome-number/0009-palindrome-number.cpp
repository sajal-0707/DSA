class Solution { //       reverse  and then compare
public:
    bool isPalindrome(int x)
{
        if (x<0)
        {
            return false;
        }
        if(x!=0 && x%10==0)
        {
            return false;
        }
        int rev=0;
        int original=x;
        while(x>rev)
        {
            rev=rev*10+x%10;
            x=x/10;
        }
        return x==rev || x==rev/10;
        }
};