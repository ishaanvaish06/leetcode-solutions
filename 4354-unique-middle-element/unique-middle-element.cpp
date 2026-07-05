class Solution {
public:
unordered_map<int,int> mp;
    bool isMiddleElementUnique(vector<int>& nums) {
        for(int i:nums)
        {
            mp[i]++;
        }
        return mp[nums[(nums.size()/2)]]==1;
    }
};