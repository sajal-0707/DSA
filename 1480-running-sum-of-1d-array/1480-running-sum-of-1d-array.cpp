class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        int n=nums.size();
        int rs=0;
        vector<int> nv;
        for(int i=0 ; i<n ; i++ )
        {
            if(i==0)
            {
                rs=nums[i];
            }
            else
            {
                rs= nums[i] + rs;
            }
            nv.push_back(rs);
        }
        return nv;
    }
};