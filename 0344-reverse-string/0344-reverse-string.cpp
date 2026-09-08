class Solution {
public:
    void reverseString(vector<char>& s)
    {
        vector<char> b;
        for(int i=s.size()-1 ; i>=0 ; i--)
        {
            b.push_back(s[i]);
        }
        s=b;
    }
};