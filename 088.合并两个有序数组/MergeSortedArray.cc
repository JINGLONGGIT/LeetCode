// 解法二：排序
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        // 将nums2全部放到nums1原有元素后面
        for (int i = 0; i < n; i++)
        {
            nums1[i + m] = nums2[i];            
        }

        // 对nums1进行排序,第三个参数为排序方法：从小打大或者从大到小，也可以不写
        sort(nums1.begin(), nums1.end());
    }
};

// 解法三：从新数组的最后一个元素开始填充
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i32ResultArrayLen = m-- + n-- - 1;
        
        while (m >= 0 && n >= 0)
        {
            nums1[i32ResultArrayLen--] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
        }
        
        while (n >= 0)
        {
            nums1[i32ResultArrayLen--] = nums2[n--];
        }
    }
};

// 解法四：以空间换时间
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
	{   
		vector<int> nums;
		nums.reserve(m);
		int i = 0, j = 0;
		
		for (; i < m && j < n;)
		{
			int n1 = nums1[i];
			int n2 = nums2[j];
			if (n1 > n2)
			{
				nums.push_back(n2);
				j++;
			}
			else 
			{
				nums.push_back(n1);
				i++;
			}
		}
		
		if (i == m)
		{
			for (; j < n; j++)
			{
				nums.push_back(nums2[j]);
			}
		}
		else if (j == n)
		{
			for (; i < m; i++)
			{
				nums.push_back(nums1[i]);
			}
		}
	
		nums1.swap(nums);
	}
};