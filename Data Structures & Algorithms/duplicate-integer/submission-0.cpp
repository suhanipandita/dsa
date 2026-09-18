class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hset;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            if (hset.contains(nums[i]))
            {
                return true;
            }
            else
            {
                hset.insert(nums[i]);
            }
        } 
        return false;
    }
};