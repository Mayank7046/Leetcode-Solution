#define ll long long
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
      long long sum=0;
      int neg=0;
      int minr=INT_MAX;
      for(auto &row :matrix){
        for(int i:row){
            if(i<0)
                neg++;
                int r=abs(i);
                sum+=r;
                minr=min(minr,r);
            }
        
      }
      return (neg%2==0)? sum:sum-2LL*minr;
    }
};