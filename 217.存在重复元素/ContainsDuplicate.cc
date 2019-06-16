// 解法一：暴力解法
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        // 异常判断：数组元素只有一个或者数组为空
        if (nums.size() == 1 || nums.size() == 0)
        {
            return false;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};

// 解法三：排序 + 相邻元素比较
class Solution {
public:
    static bool cmp(const int &a, const int &b)
    {
        return a < b;
    }
    
    bool containsDuplicate(vector<int>& nums) 
    {
        if (nums.size() <= 1)
        {
            return false;
        }
        
        sort(nums.begin(), nums.end(), cmp);
        
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        
        return false;
    }
};

// 解法四：set
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set<int> Set(nums.begin(), nums.end());
        return Set.size() != nums.size();
    }
};