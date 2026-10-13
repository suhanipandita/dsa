class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if (mp.contains(s[i]))
            {
                mp[s[i]]++;
            }
            else
            {
                mp[s[i]]=1;
            }
        }
        for (int i = 0 ; i < t.size() ; i++)
        {
            if (mp.contains(s[i]))
            {
                mp[t[i]]--;
            }
            else
            {
                return false;
            }
        }

        for (int i = 0 ; i < mp.size() ; i++)
        {
            if (mp[i]==0)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
