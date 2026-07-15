class Solution {
public:
unordered_map<int,int> mp;
    int majorityElement(vector<int>& nums) {
        for(int i:nums)
        {
            mp[i]++;
        }
        int n=nums.size();
        cout<<n/2;
        for(auto it:mp)
        {
            if(it.second>(n/2))
            {
                return it.first;
            }
        }
        return 0;
    }
};