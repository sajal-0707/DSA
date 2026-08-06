class Solution {
    public int singleNumber(int[] nums)
    {
        int xor=0;
        for(int i :nums)//for each loop
        {
            xor = xor^i;
        }
        return xor;
    }
}