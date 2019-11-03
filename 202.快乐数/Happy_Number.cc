// 快慢指针
class Solution {
private:
    int getSum(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            sum += (n % 10) * (n % 10);
            n = n / 10;
        }
        return sum;
    }
public:
    bool isHappy(int n) 
    {
        int slow = n;
        int fast = getSum(n);
        while (slow != fast)
        {
            slow = getSum(slow);
            fast = getSum(fast);
            fast = getSum(fast);
        }
        return slow == 1;
    }
};