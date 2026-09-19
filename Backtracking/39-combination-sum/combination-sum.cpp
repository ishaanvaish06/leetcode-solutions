class Solution {
public:
vector<vector<int>> ans;
void back(vector<int>& candidates,int target,int sum,int index,vector<int>& res)
{
    if(sum==target)
    {
        ans.push_back(res);
        return;
    }
    else if(sum>target)
    {
        return;
    }
    for(int i=index;i<candidates.size();i++)
    {
        res.push_back(candidates[i]);
        back(candidates,target,sum+candidates[i],i,res);
        res.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> res;
        back(candidates,target,0,0,res);
        return ans;
    }
};