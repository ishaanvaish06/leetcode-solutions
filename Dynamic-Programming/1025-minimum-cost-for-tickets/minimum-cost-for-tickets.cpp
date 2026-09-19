class Solution {
public:
int dp[366];
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int l=0;
        dp[0]=0;
        for(int i=1;i<=days[days.size()-1];i++)
        {
            if(days[l]==i)
            {
                int m=min(dp[i-1]+costs[0],dp[max(0,i-7)]+costs[1]);
                dp[i]=min(m,dp[max(0,i-30)]+costs[2]);
                l++;
            }
            else
            {
                dp[i]=dp[i-1];
            }

            if(l==days.size())
            {
                break;
            }
        }
        return dp[days[days.size()-1]];
    }
};