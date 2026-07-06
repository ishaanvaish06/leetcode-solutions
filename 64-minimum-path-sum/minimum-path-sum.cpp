class Solution {
public:
int dp[201][201];
    int minPathSum(vector<vector<int>>& grid) {
dp[0][0]=grid[0][0];
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(i==0 && j!=0)
                {
                    dp[i][j]=grid[i][j]+dp[i][j-1];
                }
                else if(j==0 && i!=0)
                {
                    dp[i][j]=grid[i][j]+dp[i-1][j];
                }
                
            }
        }
        for(int i=1;i<grid.size();i++)
        {
            for(int j=1;j<grid[0].size();j++)
            {
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }

        return dp[grid.size()-1][grid[0].size()-1];
    }
};