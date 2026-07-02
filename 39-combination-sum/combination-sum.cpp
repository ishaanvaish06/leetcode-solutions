class Solution {
public:
vector<vector<int>> ans;
void back(vector<int>& candidates,int target,int sum,vector<int>& res,int start)
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
    else
    {
        for(int i=start;i<candidates.size();i++)
        {
            res.push_back(candidates[i]);
            back(candidates,target,sum+candidates[i],res,i);
            res.pop_back();
        }
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> res;
        back(candidates,target,0,res,0);
        return ans;
    }
};