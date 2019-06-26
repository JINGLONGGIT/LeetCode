## 题目分析
### 解法一
* 两个变量CurNums(当前连续1的个数)、MaxNums(最大连续1的个数)
* CurNums：每遇到一个1，CurNums加1。遇到0，则CurNums归0
* MaxNums：CurNums每次加1之后，判断CurNums是否大于MaxNums，如果是，则更新MaxNums
* 时间复杂度：O(N)
* 空间复杂度：O(1)