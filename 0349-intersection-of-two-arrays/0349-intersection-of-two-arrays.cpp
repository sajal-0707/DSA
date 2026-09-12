class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
    int n = nums1.size();
    int m = nums2.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (nums1[i] == nums2[j])
            {
                if (find(vec.begin(), vec.end(), nums1[i]) == vec.end())
                {
                    vec.push_back(nums1[i]);
                }
                break;
            }
        }
    }
    return vec;
    }
};