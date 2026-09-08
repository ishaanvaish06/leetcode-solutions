class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=0;i<nums.size();i++)
        {
            if(ans[ans.size()-1]!=nums[i])
            {
                ans.push_back(nums[i]);
            }
        }
        nums=ans;
        return nums.size();
    }
};