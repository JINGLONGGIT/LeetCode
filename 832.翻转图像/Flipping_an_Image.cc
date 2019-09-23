class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) 
    {
        // 逆序每个一维数组
        for (int i = 0; i < A[0].size(); i++)
        {
            reverseOrderImage(A[i], 0, A[0].size() - 1);
        }
        
        // 翻转每个一维数组
        for (int i = 0; i < A[0].size(); i++)
        {
            overTurnImage(A[i]);            
        }
        
        return A;
    }
    
    /************************************************
     * 函数名称：reverseOrderImage
     * 函数功能：逆序一维数组
     * 输入参数：vector<int>& nums：要翻转的数组
     *         int start：翻转元素的起始下标
     *         int end：翻转数组的结束下标
     * 输出参数：无
     * 返 回 值：无
     ************************************************/
    void reverseOrderImage(vector<int> &nums, int start, int end)
    {
        while (start < end)
        {
            int i32Tmp = nums[end];
            nums[end] = nums[start];
            nums[start] = i32Tmp;
            start++;
            end--;
        }
    }
    
    /************************************************
     * 函数名称：overTurnImage
     * 函数功能：翻转一维数组
     * 输入参数：vector<int>& nums：要翻转的数组
     * 输出参数：无
     * 返 回 值：无
     ************************************************/
    void overTurnImage(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                nums[i] = 1;
            else
                nums[i] = 0;
        }
    }
};

