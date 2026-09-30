class Solution {
public:
    string toHex(int num)
    {
        if(num==0) return "0";
        unsigned int tem = num;
        string s= "";
        string hex_chars = "0123456789abcdef";
        while (tem > 0)
        {
            int b = tem%16;
            s += hex_chars[b];
            tem = tem/16;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};