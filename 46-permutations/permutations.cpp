class Solution {
public:
vector<vector<int>> ans;
void back(vector<int>& nums,int index)
{
    if(nums.size()==index)
    {
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[i],nums[index]);
        back(nums,index+1);
        swap(nums[i],nums[index]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> res;
        back(nums,0);
        return ans;
    }
};