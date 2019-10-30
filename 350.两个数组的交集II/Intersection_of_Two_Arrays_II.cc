// 哈希
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> res;
        unordered_map<int, int> map;
        for (int i = 0; i < nums1.size(); i++)
            map[nums1[i]] += 1;
        for (int i = 0; i < nums2.size(); i++)
        {
            if (map[nums2[i]] > 0)
            {
                res.push_back(nums2[i]);
                map[nums2[i]]--;
            }
        }
        return res;
    }
};

// 排序 + 双指针
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> res;
        int i = 0;
        int j = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
                
            else 
                nums1[i] > nums2[j] ? j++: i++;
        }
        
        return res;
    }
};