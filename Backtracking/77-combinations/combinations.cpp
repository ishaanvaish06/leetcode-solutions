class Solution {
public:
vector<vector<int>> ans;
void back(int n,int k,vector<int>& res,int start)
{
    if(k==res.size())
    {
        ans.push_back(res);
        return;
    }
    for(int i=start;i<=n;i++)
    {
        res.push_back(i);
        back(n,k,res,i+1);
        res.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> res;
        back(n,k,res,1);
        return ans;
    }
};