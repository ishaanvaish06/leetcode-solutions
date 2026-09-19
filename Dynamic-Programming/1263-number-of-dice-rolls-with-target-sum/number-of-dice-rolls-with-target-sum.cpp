class Solution {
public:

int rec(vector<vector<int>>& dp,int n,int k,int target)
{
    if(target==0 && n==0)
        {
            return 1;
        }
        if(n==0 || target<=0)
        {
            return 0;
        }
        if(dp[n][target]!=-1)
        {
            return dp[n][target];
        }

        long long ways=0;
        for(int i=1;i<=k;i++)
        {
            ways=ways+(rec(dp,n-1,k,target-i));
        }
        dp[n][target]=(int)(ways%((int)(pow(10,9)+7)));
        return dp[n][target];
}
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(31,vector<int>(1001,-1));
        return rec(dp,n,k,target);

    }
};