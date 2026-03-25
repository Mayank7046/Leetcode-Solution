class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        long double sum=0.0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=grid[i][j];
            }
        }
        long long hsum=0.0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                hsum+=grid[i][j];
            }
            if(hsum==sum/2) return true;
        }
        long double vsum=0.0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                vsum+=grid[j][i];
            }
            if(vsum==sum/2)return true;
        }
        return false;
    }

};