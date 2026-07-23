class Solution {// no repetition.          
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.empty())
        {
            return 0;
        }
        int i,j,k;
        for(i=0; i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    for(k=j; k<nums.size()-1;k++)
                    {
                        nums[k]=nums[k+1];
                    }
                    nums.pop_back();
                    j--;
                }
            }
        }
        return nums.size();
    }
};