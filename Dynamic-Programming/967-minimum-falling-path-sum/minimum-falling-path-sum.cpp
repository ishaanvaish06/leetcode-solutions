class Solution {
public:
int minima=INT_MAX;
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==1){
            return matrix[0][0];
        }
        vector<vector<int>> dp(n,vector<int>(n));
        for(int j=0;j<n;j++)
        {
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0){
                    dp[i][j]=matrix[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
                }
                else if(j==n-1)
                {
                    dp[i][j]=matrix[i][j]+min(dp[i-1][j-1],dp[i-1][j]);
                }
                else
                {
                    int x=min(dp[i-1][j-1],dp[i-1][j+1]);
                    dp[i][j]=matrix[i][j]+min(x,dp[i-1][j]);
                }

                if(i==n-1)
                {
                    minima=min(minima,dp[i][j]);
                }
            }
        }

        return minima;
    }
};