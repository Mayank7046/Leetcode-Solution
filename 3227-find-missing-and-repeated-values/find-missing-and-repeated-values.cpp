class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
 int total=n*n;
        vector<int>ans(total+1,0);
        vector<int>res;
        int missing=-1;
        int duplicate=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               ans[grid[i][j]]++;
            }
        }
         for(int i=0;i<ans.size();i++){
              if(ans[i]==0){
                missing=i;
              }
              if(ans[i]==2){
                duplicate=i;
              }
        }
        res.push_back(duplicate);
        res.push_back(missing);

       
return res;
    }
};