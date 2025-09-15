class Solution {
public:

    int dfs(vector<vector<int>>& matrix, int row,int col, int i,int j,vector<vector<int>>&dp){
       
        if(j<0||j>=col||i>=row)
        return 100000;
        if(i==row-1)
        return matrix[i][j];
         if(dp[i][j]!=-111)return dp[i][j];
        int left=matrix[i][j]+dfs(matrix,row,col,i+1,j-1,dp);
        int down=matrix[i][j]+dfs(matrix,row,col,i+1,j,dp);
        int diagonal=matrix[i][j]+ dfs(matrix,row,col,i+1,j+1,dp);
     dp[i][j]=min(left,min(down,diagonal));
        return dp[i][j];

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
       
        int row=matrix.size();
        int col=matrix[0].size();
         vector<vector<int>>dp(row,vector<int>(col,-111));
        int ans=1e7;
       for(int i=0;i<row;i++){
        ans=min(ans,dfs(matrix,row,col,0,i,dp));
       }
       return ans;
    }
};