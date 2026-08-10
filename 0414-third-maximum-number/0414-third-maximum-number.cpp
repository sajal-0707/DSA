class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        int i,j, max=0,n= nums.size();
        if(n<2)
        {
            for(i=0;i<n;i++)
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
    sort(nums.begin(), nums.end());
    if (nums.empty()) {
            return 0;
        }

        for (int i = 0; i < (int)nums.size(); i++) {
            for (int j = i + 1; j < (int)nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    for (int k = j; k < (int)nums.size() - 1; k++) {
                        nums[k] = nums[k + 1];
                    }
                    nums.pop_back();  
                    j--;              
                }
            }
        }
        int m= nums.size();
        if(m<3)
        {
            return nums[m-1];
        }
        return nums[m-3];
    }
};