class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> out(2*n);
        for (int i = 0 ; i < 2*n ; i++)
        {
            out[i] = nums[i%n]; 
        }
        return out;
    }
};