class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long tem = x;
        bool neg = tem < 0;
        if (neg) tem = -tem;

        while (tem > 0) {
            rev = rev * 10 + tem % 10;
            tem /= 10;
        }

        if (neg) rev = -rev;

        if (rev < INT_MIN || rev > INT_MAX) return 0;
        return (int)rev;
    }
};