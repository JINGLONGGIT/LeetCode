### 解法一：暴力解法(时间复杂度太高，舍弃)
nums1，nums2嵌套循环
nums2数组的每一个元素依次和nums1的数组元素进行比较。
如果大于nums1的元素，则和nums1的下一个元素进行比较；如果小于，则插入当前位置，nums1后面所有元素向后移动一个位置；

```
// 伪码表示：该算法有问题
for (nums2依次循环)
{
    for (nums1依次循环)
    {
        if (nums2[i] >= nums1[j])
        {
            continue;
        }

        nums1.push_back(0); // nums1数组个数增加1        
        // nums1从j处开始整体向后移动一位
        for (int k = nums1.size() - 1; k > j; k--)
        {
            nums1[k] = nums1[k - 1];
        }
        
        nums1[j] = nums2[i];    // 执行插入操作
        break;
    }
}
```

* 时间复杂度：O(N^3)
* 空间复杂度：O(1)
* 从前向后遍历涉及到大量的元素移动，时间复杂度太高

### 解法二：排序
时间复杂度：快排的时间复杂度是O(Nlogn)
参考：[十大经典排序算法](https://cloud.tencent.com/developer/article/1379537)

```
    // 将nums2全部放到nums1原有元素后面
    for (int i = 0; i < n; i++)
    {
        nums1[i + m] = nums2[i];            
    }

    // 对nums1进行排序,第三个参数为排序方法：从小打大或者从大到小，也可以不写
    sort(nums1.begin(), nums1.end());
```

> 尽量不要采用任何的C++自带排序函数，否则该算法题将失去意义

### 解法三：从新数组nums1的最后一个元素开始填充

### 解法四：以空间换时间
* 新定义一个数组nums，用来存放排序后的元素
* 用插入排序的方式将nums1和nums2中的元素插入到新数组nums中
* 调用系统函数swap，`nums1.swap(nums)`交换nums1和nums中的元素