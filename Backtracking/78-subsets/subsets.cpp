class Solution {
public:
vector<vector<int>> ans;
void back(vector<int>& nums,int index,vector<int>& res)
{
    if(index==nums.size())
    {
        ans.push_back(res);
        return;
    }
    
        res.push_back(nums[index]);
        back(nums,index+1,res);

        res.pop_back();
        back(nums,index+1,res);
    
    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;
        back(nums,0,res);
        return ans;
    }
};