class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(int i:nums)
        {
            if(i!=val)
            {
                ans.push_back(i);
            }
        }
        nums=ans;
        return ans.size();
    }
};