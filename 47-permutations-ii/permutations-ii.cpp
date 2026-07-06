class Solution {
public:
vector<vector<int>> ans;

void back(vector<int>& nums,int start)
{
    if(start==nums.size())
    {
        ans.push_back(nums);
        return;
    }
unordered_map<int,int> mp;
    for(int i=start;i<nums.size();i++)
    {
        if(mp[nums[i]]){
            continue;
        }
        mp[nums[i]]++;
        swap(nums[i],nums[start]);
        back(nums,start+1);
        swap(nums[i],nums[start]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        back(nums,0);
        return ans;
    }
};