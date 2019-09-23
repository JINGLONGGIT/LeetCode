# 832.翻转图像
> 
原始数组  
1 1 0   
1 0 1   
0 0 0  
  
> 
逆序（翻转每一行）  
0 1 1  
1 0 1  
0 0 0   
  
> 
结果数组  
1 0 0  
0 1 0  
1 1 1  


## 暴力解法（两次循环）
* 定义两个接口
    * 逆序每个一维数组。参考[189.Rotate Array](https://github.com/JINGLONGGIT/LeetCode/tree/master/189.%E6%97%8B%E8%BD%AC%E6%95%B0%E7%BB%84)
    * 翻转每个一维数组


* 时间复杂度 O(n^2)