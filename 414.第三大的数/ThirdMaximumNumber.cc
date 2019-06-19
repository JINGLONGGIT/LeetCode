class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int i32FirstMax = -2147483648;
        int i32SecondMax = -2147483648;
        int i32ThirdMax = -2147483648;
        bool flag = 0;
        
        // 寻找第一大的数
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= i32FirstMax)
            {
                i32FirstMax = nums[i];
            }
        }
        
        // 寻找第二大的数
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i32FirstMax && nums[i] >= i32SecondMax)
            {
                i32SecondMax = nums[i];
            }
        }
        
        // 寻找第三大的数
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i32FirstMax && nums[i] != i32SecondMax && nums[i] >= i32ThirdMax)
            {
                flag = 1;
                i32ThirdMax = nums[i];
            }
        }
        
        // 判断是否存在第三大的数
        if (flag)
        {
            return i32ThirdMax;
        }
        else 
        {
            return i32FirstMax;
        }
    }
};