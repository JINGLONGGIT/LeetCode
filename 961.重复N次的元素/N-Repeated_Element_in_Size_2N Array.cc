// map哈希
class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        map<int, int> HashMap;
        int i = 0;
        
        for (; i < A.size(); i++)
        {
            HashMap[A[i]]++;
            
            if (HashMap[A[i]] == A.size() / 2)
                break;
        }
        
        return A[i];
    }
};

// map哈希优化
class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        map<int, int> HashMap;
        int i = 0;
        
        for (; i < A.size(); i++)
        {
            HashMap[A[i]]++;
            
            if (HashMap[A[i]] > 1)
                break;
        }
        
        return A[i];
    }
};

// set哈希
class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        set<int> HashSet;
        int i = 0;
        
        for (i = 0; i < A.size(); i++)
        {
            if (HashSet.find(A[i]) == HashSet.end())
                HashSet.insert(A[i]);
            else
                break;
        }
        
        return A[i];
    }
};

// 排序
class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        sort(A.begin(), A.end());
        
        if (A[0] == A[1])
            return A[0];
        
        return A[A.size() / 2];
    }
};