class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
    int ans=0;
    int i,n= nums.size();
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
     if(nums[0]!=0)
        {
            return 0;
        }
    ans=n;
    for(int i=0 ; i<nums.size()-1 ; i++ )
    {
        if(nums[i+1]- nums[i]>1)
        {
            ans=nums[i]+1;
            break;
        }
    }
    return ans;
    }
};