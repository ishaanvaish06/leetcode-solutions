class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int x=k;
        unordered_map<int,int> mp;
        for(int i:nums) mp[i]++;
        while(mp[x])
        {
            x+=k;
        }
        return x;
    }
};