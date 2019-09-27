class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> vecTmp;
        int i = 0; 
        int j = 0;
        int boolean = false;
        
        // 边界条件判断：空集是所有集合的子集
        if (nums1.size() == 0)
        {
            return vecTmp;
        }
        
        for (i = 0; i < nums1.size(); i++)
        {
            boolean = false;
            // 找到对应的位置
            for (j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                    break;
            }
            
            // 寻找更大的元素
            for (int k = j + 1; k < nums2.size(); k++)
            {
                if (nums2[k] > nums2[j])
                {
                    vecTmp.push_back(nums2[k]);
                    boolean = true;
                    break;   
                }
            }
            
            if (boolean == false)
            {
                vecTmp.push_back(-1);
            }
        }
        
        return vecTmp;
    }
};