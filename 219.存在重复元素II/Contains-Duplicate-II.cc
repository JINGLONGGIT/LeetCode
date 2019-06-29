// 解法一：暴力解法
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[j] == nums[i]) && ((j - i) <= k))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};

// 解法二：map
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        map<int, int> tmp;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (tmp.count(nums[i]))
            {
                if (i - tmp[nums[i]] <= k)
                {
                    return true;
                }
                else 
                {
                    // 修改map中的索引
                    tmp[nums[i]] = i;
                }
            }
            
            tmp.insert(map<int, int>::value_type(nums[i], i));
        }
        
        return false;
    }
};

