class Solution {
public:
    int numIdenticalPairs(vector<int>& nums)
    {
        int i,j,count=0,n=nums.size();
        for (i=0 ; i<n ; i++)
        {
            for(j=0 ; j<n ; j++)
            {
                if(nums[i] == nums[j] && i < j)
                {
                    count++;
                }
            }
        }
        return count;
    }
};