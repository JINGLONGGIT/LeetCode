// 解法一：
class Solution 
{
public:    
    int dominantIndex(vector<int>& nums) 
    {
        // 数组中只有一个元素的处理方式
        if (nums.size() == 1)
        {
            return 0;
        }
        
        // 解法一：每一个元素逐一比较
        // 解法二：判断最大值和第二大的值是否存在大于两倍的关系（注意值为0的情况）
        // 找数组中的最大值
        int i32FirstMax = nums[0];
        int i32FirstMaxPos = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > i32FirstMax)
            {
                i32FirstMax = nums[i];
                i32FirstMaxPos = i;
            }
        }
        
        // 找数组中第二大的值
        int i32SecondMax = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == i32FirstMaxPos)
            {
                continue;
            }
            
            if (nums[i] > i32SecondMax)
            {
                i32SecondMax = nums[i];
            }
        }
        
        // 判断是否存在两倍的关系
        if (i32SecondMax * 2 <= i32FirstMax)
        {
            return i32FirstMaxPos;
        }
        else 
        {
            return -1;
        }
    }
};