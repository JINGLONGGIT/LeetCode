class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) 
    {
        int sum = 0;
        for (int i = 0; i < A.size(); i++)
        {
            sum += A[i];
        }

        if (sum % 3 != 0)
            return false;
        
        sum /= 3;
        int cursum = 0, cnt = 0;
        for (int i = 0; i < A.size(); i++)
        {
            cursum += A[i];
            if (cursum == sum)
            {
                cnt++;
                cursum = 0;
            }
        }

        if (cnt == 3 || cnt > 3 && sum == 0)
            return true;
        else 
            return false;
    }
};