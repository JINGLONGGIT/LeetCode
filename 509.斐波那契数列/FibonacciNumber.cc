// 解法一：递归
class Solution {
public:
    int fib(int N) 
    {
        if (N == 0)
        {
            return 0;
        }
        else if (N == 1)
        {
            return 1;
        }
        else 
        {
            return fib(N - 1) + fib(N - 2);
             
        }
    }
};

// 解法二：数组方式
class Solution {
public:
    int fib(int N) 
    {
        int i32Tmp = 0;
        vector<int> nums = {0, 1};
        
        if (N < 2)
        {
            return N;
        }
        
        for (int i = 2; i <= N; i++)
        {
            i32Tmp = nums[i - 1] + nums[i - 2];
            nums.push_back(i32Tmp);
        }
        
        return i32Tmp;
    }
};