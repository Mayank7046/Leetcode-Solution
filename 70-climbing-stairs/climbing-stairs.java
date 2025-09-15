class Solution {
    int dp[];
    public int climbStairs(int n) {
        this.dp=new int [n+1];
        Arrays.fill(dp,-1);
        return dfs(n);
    }
    public int dfs(int i)
    {
        if (i==0)
        return 1;

       

        if (i<0)
        return 0;

        if( dp[i]!=-1)
        return dp[i];

        dp[i]=dfs(i-1)+dfs(i-2);
        return dp[i];
    }
}