class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), j = 0, temp=0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                // swap(nums[i], nums[j]);
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
    }
};