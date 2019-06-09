### 题目分析
解法一：
遍历整个数组。
```
int j = 0;

for (int i = 0; j < nums.size(); i++)
{
    if (nums[i] != vals)
    {
        nums[j] = nums[i];
        j++;
    }
}

return j;
```
时间复杂度：O(N)