// 哈希
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> res;
        unordered_set<int> set1;
        unordered_set<int> set2;
        
        for (int i = 0; i < nums1.size(); i++)
            set1.insert(nums1[i]);
        
        for (int i = 0; i < nums2.size(); i++)
            if (set1.find(nums2[i]) != set1.end())
                set2.insert(nums2[i]);
        
        res.assign(set2.begin(), set2.end());
        return res;
    }
};

// 双指针遍历
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> res;
        unordered_set<int> set1;
        
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums2[j] == nums1[i])
                    set1.insert(nums2[j]);
            }
        }
        
        res.assign(set1.begin(), set1.end());
        return res;
    }
};

