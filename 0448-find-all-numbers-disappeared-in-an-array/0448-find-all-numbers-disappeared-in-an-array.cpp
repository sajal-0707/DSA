class Solution {//use sort then find missing number
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        vector<int> result;
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
    int exp = 1;
    
    for (i = 0; i < n; i++) 
    {
        while (exp < nums[i]) {
            result.push_back(exp);
            exp++;
        }
        if (nums[i] == exp) {
            exp++;
        }
    }
    while (exp <= n)
    {
        result.push_back(exp);
        exp++;
    }
    return result;
    }
};