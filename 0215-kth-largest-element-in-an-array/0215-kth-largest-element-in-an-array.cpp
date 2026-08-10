class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        int n=nums.size();
       sort(nums.begin(), nums.end());
    if (nums.empty()) {
            return 0;
        }
        return nums[n-k];
    }
};