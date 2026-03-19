class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>cumx(n,vector<int>(m,0)); 
      vector<vector<int>>cumy(n,vector<int>(m,0));
      int count=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cumx[i][j]=(grid[i][j]=='X');
            cumy[i][j]=(grid[i][j]=='Y');

              if(i-1>=0){
            cumx[i][j]+=cumx[i-1][j];
            cumy[i][j]+=cumy[i-1][j];
              }
              if(j-1>=0){
            cumx[i][j]+=cumx[i][j-1];
            cumy[i][j]+=cumy[i][j-1];
              }
             if(i-1>=0 && j-1>=0){
            cumx[i][j]-=cumx[i-1][j-1];
            cumy[i][j]-=cumy[i-1][j-1];
             }
               if(cumx[i][j]==cumy[i][j] &&cumx[i][j]>0){
                count++;
             }
        }
         
      }
   
             return count; 
      
    }
};