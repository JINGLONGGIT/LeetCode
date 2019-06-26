// 解法二
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int sum1 = 0;
        int sum2 = 0;
        int i = 0;
        
        for (; i < nums.size(); i++)
        {
            sum1 += i;
            sum2 += nums[i];
        }
        
        return sum1 + i - sum2;
    }
};