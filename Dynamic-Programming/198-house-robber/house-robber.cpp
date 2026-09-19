class Solution {
public:
int dp[100];
    int rob(vector<int>& nums) {
        dp[0]=nums[0];
        if(nums.size()==1) return dp[0];
        for(int i=1;i<nums.size();i++)
        {
            if(i==1) dp[i]=nums[i];
            if(i==2) dp[i]=nums[i]+dp[0];
            if(i>=3)
            {
                dp[i]=nums[i]+max(dp[i-2],dp[i-3]);
            }
        }
        return max(dp[nums.size()-1],dp[nums.size()-2]);
    }
};