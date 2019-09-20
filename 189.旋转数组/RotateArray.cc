// 暴力解法
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        for (int i = 0; i < k; i++)
        {
            int i32Tmp = nums[nums.size() - 1];
            
            for (int j = nums.size() - 2; j >= 0; j--)
                nums[j + 1] = nums[j];
            
            nums[0] = i32Tmp;
        }
    }
};

// 翻转数组
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        if (nums.size() < 2)
            return ;
        k %= nums.size();                       // 实际翻转的元素个数
        reverse(nums, 0, nums.size() - 1);      // 翻转整个数组
        reverse(nums, 0, k - 1);                // 翻转前k个元素
        reverse(nums, k, nums.size() - 1);      // 翻转后n - k个元素
    }
    
    /************************************************
     * 函数名称：reverse
     * 函数功能：翻转数组中下标范围为start到end的元素位置
     * 输入参数：vector<int>& nums：要翻转的数组
     *         int start：翻转元素的起始下标
     *         int end：翻转数组的结束下标
     * 输出参数：无
     * 返 回 值：无
     ************************************************/
    void reverse(vector<int>& nums, int start, int end)
    {
        while (start < end)
        {
            int i32Tmp = nums[start];
            nums[start] = nums[end];
            nums[end] = i32Tmp;
            start++;
            end--;
        }
    }
};

// 使用额外数组
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        if (nums.size() < 2)
            return;
        k %= nums.size();
        
        vector<int> vecResult(nums.size());
        
        for (int i = 0; i < nums.size(); i++)
            vecResult[(i + k) % nums.size()] = nums[i];
        
        for (int i = 0; i < nums.size(); i++)
            nums[i] = vecResult[i];
    }
};

// 环状替代
