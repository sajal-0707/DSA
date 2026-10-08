class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> vec;
        int n=nums1.size();
        int m=nums2.size();
        vector<bool>used(m, false);
        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                if(!used[j] && nums1[i]==nums2[j])
                {
                    vec.push_back(nums1[i]);
                    used[j]=true;
                    break;
                }
            }
        }
        return vec;
    }
};