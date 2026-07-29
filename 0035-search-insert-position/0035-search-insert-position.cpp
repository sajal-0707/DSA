class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int a=nums.size();//if all elements are smaller than the target then we will have to return the size that is the last index
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