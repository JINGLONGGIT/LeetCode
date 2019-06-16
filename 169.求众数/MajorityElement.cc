// 解法一：map
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int, int> count;
        
        for (int i = 0; i < nums.size(); i++)
        {
            ++count[nums[i]];
        }
        
        for (map<int, int>::iterator map_it = count.begin(); map_it != count.end(); map_it++)
        {
            if (map_it->second > (nums.size() / 2))
            {
                return map_it->first;
            }
        }
        
        return 0;
    }
};

// 解法二：
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int i32Mode = nums.size() / 2;
        int i32CurNumFre = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            i32CurNumFre = 1;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    i32CurNumFre++;
                }
            }
            
            if (i32CurNumFre > i32Mode)
            {
                return nums[i];
            }
        }
        
        return 0;
    }
};

// 解法四：摩尔投票算法
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int i32Result = 0;
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                i32Result = nums[i];
                count++;
            }
            else
            {
                i32Result == nums[i] ? count++ : count--;
            }
        }
        
        return i32Result;
    }
};