class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        int l=0;
        int r=0;
        unordered_map<char,int> mp;
        while(r<s.size())
        {
            mp[s[r]]++;
            while(mp[s[r]]>1)
            {
                mp[s[l]]--;
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;

    }
};