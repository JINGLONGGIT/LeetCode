// 解法一：暴力解法，遍历整个数组
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        // 处理边界条件
        if (nums[0] > target)
        {
            return 0;
        }
        else if (nums[nums.size() - 1] < target)
        {
            return nums.size();
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                return i;
            }

            if (nums[i] < target && nums[i + 1] > target)
            {
                return i + 1;
            }
        }
        
        return nums.size();
    }
};

// 解法二：二分法
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int high = nums.size() - 1;
        int low = 0;
        
        while (low <= high)
        {
            int mid = (high + low) / 2;
            
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else 
            {
                low = mid + 1;
            }
        }
        
        return low;
    }
};