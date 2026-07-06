class Solution {
public:
int dp[1001];
    int minCostClimbingStairs(vector<int>& cost) {
        dp[0]=cost[0];
        dp[1]=cost[1];
        if(cost.size()==2)
        {
            return min(dp[0],dp[1]);
        }
        for(int i=2;i<cost.size();i++)
        {
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[cost.size()-1],dp[cost.size()-2]);
    }
};