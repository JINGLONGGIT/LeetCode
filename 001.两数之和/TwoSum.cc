// 双指针/双重循环
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> vecResult;
        
        // 边界条件判断
        if (nums.size() == 1 && nums[0] == target)
        {
            vecResult.push_back(0);
            return vecResult;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (target == nums[i] + nums[j])
                {
                    vecResult.push_back(i);
                    vecResult.push_back(j);
                    
                    return vecResult;
                }
            }
        }
        
        return vecResult;
    }
};

// 两遍哈希表
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> HashMap;
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++)
            HashMap.insert(map<int, int>::value_type(nums[i], i));
        for (int i = 0; i < nums.size(); i++)
        {
            if ((HashMap.count(target - nums[i]) > 0) && (HashMap[target - nums[i]] != i))
            {
                res.push_back(i);
                res.push_back(HashMap[target - nums[i]]);
                break;
            }
        }
        return res;
    }
};

// 一遍哈希表
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> HashMap;
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if ((HashMap.count(target - nums[i]) > 0) && (HashMap[target - nums[i]] != i))
            {
                res.push_back(HashMap[target - nums[i]]);
                res.push_back(i);
                break;
            }
            HashMap.insert(map<int, int>::value_type(nums[i], i));
        }
        return res;
    }
};