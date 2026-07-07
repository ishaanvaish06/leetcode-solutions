class Solution {
public:

vector<vector<int>> ans;
void back(vector<int>& nums,int target,int sum,vector<int>& res,int start)
{
    if(sum==target)
    {
        ans.push_back(res);
        return;
    }
    //include
    if(sum>target || start==nums.size()) return;

    for(int i=start;i<nums.size();i++)
    {
        if(i>start && nums[i]==nums[i-1])
        {
            continue;
        }
        res.push_back(nums[i]);
        back(nums,target,sum+nums[i],res,i+1);
        res.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        back(nums,target,0,res,0);
        return ans;
    }
};
