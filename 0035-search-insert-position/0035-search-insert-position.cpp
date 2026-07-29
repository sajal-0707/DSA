class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int a=nums.size();
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(target==nums[i])
            {
                return i;
            }
            if(target<nums[i])
            {
                a=i--;
                break;
            }
        }
        return a;
    }
};