class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> mp;
        for (int i = 0 ; i < nums.size() ; i++)
        {
            int diff = target - nums[i];
            if (mp.contains(diff))
            {
                result.push_back(mp[diff]);
                result.push_back(i);
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return result;
    }
};
