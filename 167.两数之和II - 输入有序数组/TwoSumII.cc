// 暴力解法
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> vecTmp;

        for (int i = 0; i < numbers.size() - 1; i++)
        {
            for (int j = i + 1; j < numbers.size(); j++)
            {
                if ((numbers[j] + numbers[i]) == target)
                {
                    vecTmp.push_back(i + 1);
                    vecTmp.push_back(j + 1);
         
                    return vecTmp;
                }
            }
        }
        
        return vecTmp;
    }
};

// 双指针
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int low = 0; 
        int high = numbers.size() - 1;
        vector<int> vecTmp;
        
        while (low < high)
        {
            int i32Tmp = numbers[low] + numbers[high];
            if (target == i32Tmp)
            {
                vecTmp.push_back(low + 1);
                vecTmp.push_back(high + 1);
                return vecTmp;
            }
            else if (i32Tmp > target)
                high -= 1;
            else
                low += 1;
                
        }
        
        return vecTmp;
    }
};

// 二分法
class Solution {
public:
    /*********************************************
     * 函数功能：查找目标值target在数组numbers中的位置
     * 输入参数：vector<int>& numbers：目标数组
     *         int target：要查找的目标值
     * 输出参数：无
     * 返 回 值：成功：目标值的数组下标
     *          失败：-1
     *********************************************/ 
    int BinarySearch(vector<int>& numbers, int target)
    {
        int low = 0; 
        int high = numbers.size() - 1;
        
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (target < numbers[mid])
                high = mid;
            else if (target > numbers[mid])
                low = mid + 1;
            else
                return mid;
        }
        
        return -1;
    }
    
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        vector<int> vecRes;
        
        for (int i = 0; i < numbers.size(); i++)
        {
            int i32Res = BinarySearch(numbers, target - numbers[i]);
            
            if (-1 != i32Res && i32Res != i)        // 不能使用重复元素
            {
                vecRes.push_back(i + 1);
                vecRes.push_back(i32Res + 1);
            }
        }
        
        return vecRes;
    }
};