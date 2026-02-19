class Solution {
public:

   vector<int>vec;

   int solve(int n){
    if(vec[n]!=-1)return vec[n];
       if(n==0){
        return 0;
       } 
       int ans=INT_MAX;
       int k=1;
       while(k*k<=n){
        ans=min(ans,1+solve(n-(k*k)));
        k++;
       }
       return vec[n]=ans;
    }
    int numSquares(int n) {
        vec.resize(n+1,-1);
        return solve (n);
    }
};