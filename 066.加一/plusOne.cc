// 解法一：
class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int i32CarryFlag = 0;       // 进位标志位
        
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            digits[i]++;
            if (digits[i] == 10)
            {
                i32CarryFlag = 1;
            }
            else 
            {
                break;
            }
            
            if (i32CarryFlag)
            {
                i32CarryFlag = 0;
                digits[i] = 0;
            }
            
            if (i == 0 && digits[i] == 0)
            {
                digits.push_back(0);

                for (int i = digits.size() - 2; i >= 0; i--)
                {
                    digits[i + 1] = digits[i];
                }
                
                digits[0] = 1;
            }
        }
        
        return digits;
    }
};

// 解法三：
class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {   
        int i;
        for (i = digits.size() - 1; i >= 0; i--)
        {
            digits[i] = (digits[i] + 1) % 10;
            
            if (digits[i] != 0)
            {
                return digits;
            }
        }
        
        if (i == -1)
        {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};