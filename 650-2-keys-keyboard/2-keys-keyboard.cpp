class Solution {
public:
int dp[2000][1001];
int func(int clip,int screen,int n)
{
    if(screen==n)
    {
        return 0;
    }
    else if(screen>n)
    {
        return 1e9;
    }
    return dp[clip][screen]=min(1+func(clip,screen+clip,n),2+func(screen,screen*2,n));
}
    int minSteps(int n) {
        if(n==1)
        {
            return 0;
        }
        return 1 + func(1,1,n);
    }
};