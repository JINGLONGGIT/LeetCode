class Solution {
public:
    int distributeCandies(vector<int>& candies) 
    {
        set<int> HashSet;
        
        for (int i = 0; i < candies.size(); i++)
        {
            HashSet.insert(candies[i]);
        }
        
        return min(candies.size() / 2, HashSet.size());
    }
};