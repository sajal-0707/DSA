class Solution {
public:
    int romanToInt(string s)
    {
        int I=1;
        int V=5;
        int X=10;
        int L=50;
        int C=100;
        int D=500;
        int M=1000;
        int n=s.length();
        int tot=0;
        for(int i=0; i<n ;i++)
        {
            int curr;
            switch(s[i])
            {
                case 'I':
                curr=I;
                break;

                case 'V':
                curr=V;
                break;

                case 'X':
                curr=X;
                break;

                case 'L':
                curr=L;
                break;

                case 'C':
                curr=C;
                break;

                case 'D':
                curr=D;
                break;

                case 'M':
                curr=M;
                break;
            }
            int next=0;
            if(i+1<n)
            {
                switch (s[i+1])
                {
                    case 'I':
                    next=I;
                    break;

                    case 'V':
                    next=V;
                    break;

                    case 'X':
                    next=X;
                    break;

                    case 'L':
                    next=L;
                    break;

                    case 'C':
                    next=C;
                    break;

                    case 'D':
                    next=D;
                    break;

                    case 'M':
                    next=M;
                    break;
                }
            }
                if(curr<next)
                {
                    tot-=curr;
                }
                else
                {
                    tot+=curr;
                }
        }
        return tot;
    }
};