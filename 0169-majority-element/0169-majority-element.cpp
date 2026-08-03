class Solution {//first perform incercion sort then the majority element will cover most of middle part so print the middle element
public:
    int majorityElement(vector<int>& nums) {
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
    return nums[n/2];
    }
};