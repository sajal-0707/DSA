class Solution {
public:
    vector<int> constructRectangle(int area)
    {
        int best_L = area;
        int best_W = 1;
        for (int i = 1; i * i <= area; i++)
        {
            if (area % i == 0)
            {
                int w = i;
                int l = area / i;
                best_L = l;
                best_W = w;
            }
        }
        return {best_L, best_W};
    }
};