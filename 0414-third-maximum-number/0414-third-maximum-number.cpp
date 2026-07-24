class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        int i,j,max=0,n= nums.size();
        if(nums.size()<2)
        {
            for(i=0;i<n;i++)
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
    for(int i=1;i<n;i++)
    {
        int curr=nums[i];
        int prev=i-1;
        while(prev>=0 && nums[prev]>curr)
        {
            nums[prev+1]=nums[prev];
            prev--;
        }
        nums[prev+1]=curr;
    }
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